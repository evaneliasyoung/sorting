/**
*  @file      pch.h
*  @brief     The pre-compiled headers.
*
*  @author    Evan Elias Young
*  @date      2020-02-03
*  @date      2021-02-11
*  @copyright Copyright 2020-2021 Evan Elias Young. All rights reserved.
*/

#ifndef SORTING_PCH_H_
#define SORTING_PCH_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

#ifndef NUM_ALGS
#define NUM_ALGS 7
#endif // NUM_ALGS

#ifndef ARRAY_TYPE
#define ARRAY_TYPE uint16_t
#endif // ARRAY_TYPE

#ifndef ARRAY_SIZE
#define ARRAY_SIZE UINT16_MAX
#endif // ARRAY_SIZE

#ifndef FULL_RAND
#define FULL_RAND 1.00
#endif // FULL_RAND

#ifndef PART_RAND
#define PART_RAND 0.10
#endif // PART_RAND

#endif // SORTING_PCH_H_
