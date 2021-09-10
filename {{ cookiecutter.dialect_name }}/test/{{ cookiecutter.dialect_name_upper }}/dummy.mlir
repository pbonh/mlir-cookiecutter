// RUN: {{ cookiecutter.dialect_name }}-opt %s | {{ cookiecutter.dialect_name }}-opt | FileCheck %s

module {
    // CHECK-LABEL: func @bar()
    func @bar() {
        %0 = constant 1 : i32
        {% raw %}// CHECK: %{{.*}}{% endraw %} = {{ cookiecutter.dialect_name }}.foo %{% raw %}{{.*}}{% endraw %} : i32
        %res = {{ cookiecutter.dialect_name }}.foo %0 : i32
        return
    }
}
