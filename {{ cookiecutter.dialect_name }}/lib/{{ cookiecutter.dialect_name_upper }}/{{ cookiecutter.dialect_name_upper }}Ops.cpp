//===- {{ cookiecutter.dialect_name_upper }}Ops.cpp - {{ cookiecutter.dialect_name_upper }} dialect ops ---------------*- C++ -*-===//
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "{{ cookiecutter.dialect_name_upper }}/{{ cookiecutter.dialect_name_upper }}Ops.h"
#include "{{ cookiecutter.dialect_name_upper }}/{{ cookiecutter.dialect_name_upper }}Dialect.h"
#include "mlir/IR/OpImplementation.h"

#define GET_OP_CLASSES
#include "{{ cookiecutter.dialect_name_upper }}/{{ cookiecutter.dialect_name_upper }}Ops.h.inc"
