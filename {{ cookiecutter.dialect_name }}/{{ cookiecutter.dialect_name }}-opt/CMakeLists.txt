get_property(dialect_libs GLOBAL PROPERTY MLIR_DIALECT_LIBS)
get_property(conversion_libs GLOBAL PROPERTY MLIR_CONVERSION_LIBS)
set(LIBS
        ${dialect_libs}
        ${conversion_libs}
        MLIROptLib
        MLIR{{ cookiecutter.dialect_name_upper }}
        )
add_llvm_executable({{ cookiecutter.dialect_name }}-opt {{ cookiecutter.dialect_name }}-opt.cpp)

llvm_update_compile_flags({{ cookiecutter.dialect_name }}-opt)
target_link_libraries({{ cookiecutter.dialect_name }}-opt PRIVATE ${LIBS})
