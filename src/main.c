/*
 * Copyright (c) 2024-2025, Erich Styger
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "platform.h"
#include "McuRTOS.h"
#include <stdio.h>
#if PL_CONFIG_USE_GCOV
  #include "McuCoverage.h"
  #include "gcov_test.h" //BR added for coverage testing
#endif

int main(void) {
  PL_Init();
  gcov_test(1); // Call the test function to ensure coverage
  gcov_test(0); // Call the test function with a different value to cover more branches
  vTaskStartScheduler();
#if PL_CONFIG_USE_GCOV
  McuCoverage_WriteFiles(); /* write coverage data files */
#endif /* PL_CONFIG_USE_GCOV */

  for(;;) {
    /* do not return from main() */
  }
  return 0;
}
