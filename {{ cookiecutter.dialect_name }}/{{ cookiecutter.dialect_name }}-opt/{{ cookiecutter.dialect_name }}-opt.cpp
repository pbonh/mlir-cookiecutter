//===- {{ cookiecutter.dialect_name }}-opt.cpp ---------------------------------------*- C++ -*-===//
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "mlir/IR/Dialect.h"
#include "mlir/IR/MLIRContext.h"
#include "mlir/InitAllDialects.h"
#include "mlir/InitAllPasses.h"
#include "mlir/Pass/Pass.h"
#include "mlir/Pass/PassManager.h"
#include "mlir/Support/FileUtilities.h"
#include "mlir/Support/MlirOptMain.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/InitLLVM.h"
#include "llvm/Support/SourceMgr.h"
#include "llvm/Support/ToolOutputFile.h"

#include "{{ cookiecutter.dialect_name_upper }}/{{ cookiecutter.dialect_name_upper }}Dialect.h"
#include "{{ cookiecutter.dialect_name_upper }}/{{ cookiecutter.dialect_name_upper }}OpsDialect.cpp.inc"

int main(int argc, char **argv) {
  mlir::registerAllPasses();
  // TODO: Register {{ cookiecutter.dialect_name }} passes here.

  mlir::DialectRegistry registry;
  registry.insert<mlir::{{ cookiecutter.dialect_name }}::{{ cookiecutter.dialect_name_upper }}Dialect>();
  registry.insert<mlir::StandardOpsDialect>();
  registry.insert<mlir::arith::ArithmeticDialect>();
  // Add the following to include *all* MLIR Core dialects, or selectively
  // include what you need like above. You only need to register dialects that
  // will be *parsed* by the tool, not the one generated
  // registerAllDialects(registry);

  return mlir::asMainReturnCode(
      mlir::MlirOptMain(argc, argv, "{{ cookiecutter.dialect_name_upper }} optimizer driver\n", registry));
}
