//===- {{ cookiecutter.dialect_name_upper }}Dialect.cpp - {{ cookiecutter.dialect_name_upper }} dialect ---------------*- C++ -*-===//
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "{{ cookiecutter.dialect_name_upper }}/{{ cookiecutter.dialect_name_upper }}Dialect.h"
#include "{{ cookiecutter.dialect_name_upper }}/{{ cookiecutter.dialect_name_upper }}Ops.h"

using namespace mlir;
using namespace mlir::{{ cookiecutter.dialect_name }};

//===----------------------------------------------------------------------===//
// {{ cookiecutter.dialect_name_upper }} dialect.
//===----------------------------------------------------------------------===//

void {{ cookiecutter.dialect_name_upper }}Dialect::initialize() {
  addOperations<
#define GET_OP_LIST
#include "{{ cookiecutter.dialect_name_upper }}/{{ cookiecutter.dialect_name_upper }}Ops.cpp.inc"
      >();
}
