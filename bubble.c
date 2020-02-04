/**
*  @file      bubble.c
*  @brief     Bubble sort.
*
*  @author    Evan Elias Young
*  @date      2020-02-03
*  @date      2020-02-03
*  @copyright Copyright 2020 Evan Elias Young. All rights reserved.
*/

#include "pch.h"
#include "utils.h"

/**
* @brief Runs the bubble sort.
*
* @param array The array to sort.
*/
void run_bubble(ARRAY_TYPE *array)
{
  for (size_t i = 0; i < ARRAY_SIZE - 1; ++i)
  {
    for (size_t j = 0; j < ARRAY_SIZE - 1; ++j)
    {
      if (array[j] > array[j + 1])
      {
        array_swap(array, j, j + 1);
      }
    }
  }
}
