/**
*  @file      heap.c
*  @brief     Heap sort.
*
*  @author    Evan Elias Young
*  @date      2021-02-11
*  @date      2021-02-11
*  @copyright Copyright 2021 Evan Elias Young. All rights reserved.
*/

#include "pch.h"
#include "utils.h"

/**
* @brief Constructs the max heap within the array.
*
* @param array The array from which to determine max heap.
*/
void build_max_heap(ARRAY_TYPE *array)
{
  const int mod = (ARRAY_SIZE % 2 == 0 ? 0 : 1);
  for (size_t i = (ARRAY_SIZE - mod) / 2; i >= 1; --i)
  {
    max_heapify(array, i);
  }
}

/**
* @brief Converts an array to a max heap format.
*
* @param array The array to convert to max heap.
* @param i The index to heapify from.
*/
void max_heapify(ARRAY_TYPE *array, int i)
{
  int l = 2 * i;
  int r = l + 1;
  int max = r <= ARRAY_SIZE && array[r] > array[max]
                ? r
            : l <= ARRAY_SIZE && array[l] > array[i]
                ? l
                : i;

  if (max != i)
  {
    array_swap(array, i, max);
    max_heapify(array, max);
  }
}

/**
* @brief Runs the heap sort.
*
* @param array The array to sort.
*/
void run_heap(ARRAY_TYPE *array)
{
  build_max_heap(array);
  for (size_t i = ARRAY_SIZE; i >= 2; --i)
  {
    array_swap(array, 1, i);
    max_heapify(array, 1);
  }
}
