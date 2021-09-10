// RUN: {{ cookiecutter.dialect_name }}-opt %s | {{ cookiecutter.dialect_name }}-opt | FileCheck %s

module {
    // CHECK-LABEL: func @bar()
    func @bar() {
        %0 = constant 1 : i32
        // CHECK: %{{.*}} = {{ cookiecutter.dialect_name }}.foo %{{.*}} : i32
        %res = {{ cookiecutter.dialect_name }}.foo %0 : i32
        return
    }
}
