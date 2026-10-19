/*
 * Copyright (c) 2023-2024, Erich Styger
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "gcov_test.h"
#include "test_gcov.h"
#include "unity/unity.h"

void TestGcov_Coverage(void) {
  gcov_test(0);
  gcov_test(1);
}
