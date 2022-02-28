//===- {{ cookiecutter.dialect_name_upper }}Dialect.td - {{ cookiecutter.dialect_name_upper }} dialect -----------*- tablegen -*-===//
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef {{ cookiecutter.dialect_name_allcaps }}_DIALECT
#define {{ cookiecutter.dialect_name_allcaps }}_DIALECT

include "mlir/IR/OpBase.td"

//===----------------------------------------------------------------------===//
// {{ cookiecutter.dialect_name_upper }} dialect definition.
//===----------------------------------------------------------------------===//

def {{ cookiecutter.dialect_name_upper }}_Dialect : Dialect {
    let name = "{{ cookiecutter.dialect_name }}";
    let summary = "A {{ cookiecutter.dialect_name }} out-of-tree MLIR dialect.";
    let description = [{
        This dialect is an example of an out-of-tree MLIR dialect designed to
        illustrate the basic setup required to develop MLIR-based tools without
        working inside of the LLVM source tree.
    }];
    let cppNamespace = "::mlir::{{ cookiecutter.dialect_name }}";
}

//===----------------------------------------------------------------------===//
// Base {{ cookiecutter.dialect_name }} operation definition.
//===----------------------------------------------------------------------===//

class {{ cookiecutter.dialect_name_upper }}_Op<string mnemonic, list<Trait> traits = []> :
        Op<{{ cookiecutter.dialect_name_upper }}_Dialect, mnemonic, traits>;

#endif // {{ cookiecutter.dialect_name_allcaps }}_DIALECT
