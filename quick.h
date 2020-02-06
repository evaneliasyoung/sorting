/**
*  @file      quick.h
*  @brief     Quick sort.
*
*  @author    Evan Elias Young
*  @date      2020-02-05
*  @date      2020-02-05
*  @copyright Copyright 2020 Evan Elias Young. All rights reserved.
*/

#ifndef SORTING_QUICK_H_
#define SORTING_QUICK_H_

#include "pch.h"

/**
* @brief The actual quick sort algorithm.
*
* @param array The array to sort.
* @param l The low index.
* @param h The high index.
*/
void actual_quick(ARRAY_TYPE *array, int l, int h);

/**
* @brief Runs the quick sort.
*
* @param array The array to sort.
*/
void run_quick(ARRAY_TYPE *array);

#endif // SORTING_QUICK_H_
