/**
*  @file      heap.h
*  @brief     Heap sort.
*
*  @author    Evan Elias Young
*  @date      2021-02-11
*  @date      2021-02-11
*  @copyright Copyright 2021 Evan Elias Young. All rights reserved.
*/

#ifndef SORTING_HEAP_H_
#define SORTING_HEAP_H_

#include "pch.h"

/**
* @brief Constructs the max heap within the array.
*
* @param array The array from which to determine max heap.
*/
void build_max_heap(ARRAY_TYPE *array);

/**
* @brief Converts an array to a max heap format.
*
* @param array The array to convert to max heap.
* @param i The index to heapify from.
*/
void max_heapify(ARRAY_TYPE *array, int i);

/**
* @brief Runs the heap sort.
*
* @param array The array to sort.
*/
void run_heap(ARRAY_TYPE *array);

#endif // SORTING_HEAP_H_
