add_mlir_dialect({{ cookiecutter.dialect_name_upper }}Ops {{ cookiecutter.dialect_name }})
add_mlir_doc({{ cookiecutter.dialect_name_upper }}Dialect {{ cookiecutter.dialect_name_upper }}Dialect {{ cookiecutter.dialect_name_upper }}/ -gen-dialect-doc)
add_mlir_doc({{ cookiecutter.dialect_name_upper }}Ops {{ cookiecutter.dialect_name_upper }}Ops {{ cookiecutter.dialect_name_upper }}/ -gen-op-doc)
