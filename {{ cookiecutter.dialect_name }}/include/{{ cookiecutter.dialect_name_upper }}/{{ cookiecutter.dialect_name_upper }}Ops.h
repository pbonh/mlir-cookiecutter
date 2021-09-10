//===- {{ cookiecutter.dialect_name_upper }}Ops.h - {{ cookiecutter.dialect_name_upper }} dialect ops -----------------*- C++ -*-===//
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef {{ cookiecutter.dialect_name_allcaps }}_{{ cookiecutter.dialect_name_allcaps }}OPS_H
#define {{ cookiecutter.dialect_name_allcaps }}_{{ cookiecutter.dialect_name_allcaps }}OPS_H

#include "mlir/IR/BuiltinTypes.h"
#include "mlir/IR/Dialect.h"
#include "mlir/IR/OpDefinition.h"
#include "mlir/Interfaces/SideEffectInterfaces.h"

#define GET_OP_CLASSES
#include "{{ cookiecutter.dialect_name_upper }}/{{ cookiecutter.dialect_name_upper }}Ops.h.inc"

#endif // {{ cookiecutter.dialect_name_allcaps }}_{{ cookiecutter.dialect_name_allcaps }}ONEOPS_H
