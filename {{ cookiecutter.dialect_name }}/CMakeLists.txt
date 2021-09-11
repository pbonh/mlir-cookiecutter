cmake_minimum_required(VERSION 3.14)

project({{ cookiecutter.dialect_name }}-MLIR-Dialect
    VERSION 0.0.1
    DESCRIPTION "{{ cookiecutter.dialect_name_upper }} Dialect of the MLIR Compiler Infrastructure Project"
    LANGUAGES CXX C)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    set(CMAKE_CXX_STANDARD 14 CACHE STRING "C++ standard to conform to")
    set(CMAKE_CXX_STANDARD_REQUIRED 14)
    # Let's ensure -std=c++xx instead of -std=g++xx
    set(CMAKE_CXX_EXTENSIONS OFF)

    # Let's nicely support folders in IDE's
    set_property(GLOBAL PROPERTY USE_FOLDERS ON)

    # Testing only available if this is the
    # main app
    # Note this needs to be done in the
    # main CMakeLists
    # since it calls enable_testing,
    # which must be in the
    # main CMakeLists.
    include(CTest)

    include(FetchContent)
    FetchContent_Declare(
        catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v2.13.7
        )
    FetchContent_MakeAvailable(catch2)
    FetchContent_Declare(
        llvm
        GIT_REPOSITORY https://github.com/llvm/llvm-project.git
        GIT_TAG        llvmorg-12.0.1
        SOURCE_SUBDIR  llvm
        )
    FetchContent_MakeAvailable(llvm)
    FetchContent_Declare(
        z3prover
        GIT_REPOSITORY https://github.com/Z3Prover/z3.git
        GIT_TAG        z3-4.8.12
        )
    FetchContent_MakeAvailable(z3prover)

    set (CMAKE_CXX_STANDARD ${SystemC_CXX_STANDARD} CACHE STRING
        "C++ standard to build all targets. Supported values are 98, 11, and 14.")
    set (CMAKE_CXX_STANDARD_REQUIRED ${SystemC_CXX_STANDARD_REQUIRED} CACHE BOOL
        "The with CMAKE_CXX_STANDARD selected C++ standard is a requirement.")

    # FetchContent_GetProperties(systemc)
    # set(CMAKE_PREFIX_PATH ${systemc_SOURCE_DIR})
    # set(CMAKE_PREFIX_PATH $ENV{SYSTEMC_HOME})
    # set (CMAKE_PREFIX_PATH /opt/systemc)
    # find_package(SystemCLanguage CONFIG REQUIRED)
endif()

find_package(MLIR REQUIRED CONFIG)

message(STATUS "Using MLIRConfig.cmake in: ${MLIR_DIR}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

set(LLVM_RUNTIME_OUTPUT_INTDIR ${CMAKE_BINARY_DIR}/bin)
set(LLVM_LIBRARY_OUTPUT_INTDIR ${CMAKE_BINARY_DIR}/lib)
set(MLIR_BINARY_DIR ${CMAKE_BINARY_DIR})

list(APPEND CMAKE_MODULE_PATH "${MLIR_CMAKE_DIR}")
list(APPEND CMAKE_MODULE_PATH "${LLVM_CMAKE_DIR}")
include(TableGen)
include(AddLLVM)
include(AddMLIR)
include(HandleLLVMOptions)

include_directories(${LLVM_INCLUDE_DIRS})
include_directories(${MLIR_INCLUDE_DIRS})
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_BINARY_DIR}/include)
link_directories(${LLVM_BUILD_LIBRARY_DIR})
add_definitions(${LLVM_DEFINITIONS})

set(LLVM_LIT_ARGS "-sv" CACHE STRING "lit default options")
list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/modules")
include(sanitizers)

add_subdirectory(include)
add_subdirectory(lib)
add_subdirectory(test)
add_subdirectory({{ cookiecutter.dialect_name }}-opt)
