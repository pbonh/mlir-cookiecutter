//===- {{ cookiecutter.dialect_name_upper }}Dialect.h - {{ cookiecutter.dialect_name_upper }} dialect -----------------*- C++ -*-===//
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef {{ cookiecutter.dialect_name_allcaps }}_{{ cookiecutter.dialect_name_allcaps }}DIALECT_H
#define {{ cookiecutter.dialect_name_allcaps }}_{{ cookiecutter.dialect_name_allcaps }}DIALECT_H

#include "mlir/IR/Dialect.h"

#include "{{ cookiecutter.dialect_name_upper }}/{{ cookiecutter.dialect_name_upper }}OpsDialect.h.inc"

#endif // {{ cookiecutter.dialect_name_allcaps }}_{{ cookiecutter.dialect_name_allcaps }}DIALECT_H
