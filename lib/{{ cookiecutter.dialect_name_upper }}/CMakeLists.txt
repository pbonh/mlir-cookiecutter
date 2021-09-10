add_mlir_dialect_library(MLIR{{ cookiecutter.dialect_name_upper }}
        {{ cookiecutter.dialect_name_upper }}Dialect.cpp
        {{ cookiecutter.dialect_name_upper }}Ops.cpp

        ADDITIONAL_HEADER_DIRS
        ${PROJECT_SOURCE_DIR}/include/{{ cookiecutter.dialect_name_upper }}

        DEPENDS
        MLIR{{ cookiecutter.dialect_name_upper }}OpsIncGen

	LINK_LIBS PUBLIC
	MLIRIR
	)
