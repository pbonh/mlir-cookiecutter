configure_lit_site_cfg(
        ${CMAKE_CURRENT_SOURCE_DIR}/lit.site.cfg.py.in
        ${CMAKE_CURRENT_BINARY_DIR}/lit.site.cfg.py
        MAIN_CONFIG
        ${CMAKE_CURRENT_SOURCE_DIR}/lit.cfg.py
)

set({{ cookiecutter.dialect_name_allcaps }}_OPT_TEST_DEPENDS
        FileCheck count not
        {{ cookiecutter.dialect_name }}-opt
        )

add_lit_testsuite(check-{{ cookiecutter.dialect_name }}-opt "Running the {{ cookiecutter.dialect_name }}-opt regression tests"
        ${CMAKE_CURRENT_BINARY_DIR}
        DEPENDS $\{{{ cookiecutter.dialect_name_allcaps }}_OPT_TEST_DEPENDS}
        )
set_target_properties(check-{{ cookiecutter.dialect_name }}-opt PROPERTIES FOLDER "Tests")

add_lit_testsuites({{ cookiecutter.dialect_name_allcaps }}_OPT ${CMAKE_CURRENT_SOURCE_DIR} DEPENDS $\{{{ cookiecutter.dialect_name_allcaps }}_OPT_TEST_DEPENDS})
