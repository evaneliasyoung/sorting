/**
*  @file      comb.c
*  @brief     Comb sort.
*
*  @author    Evan Elias Young
*  @date      2020-02-05
*  @date      2020-02-05
*  @copyright Copyright 2020 Evan Elias Young. All rights reserved.
*/

#include "pch.h"
#include "utils.h"

/**
* @brief Runs the comb sort.
*
* @param array The array to sort.
*/
void run_comb(ARRAY_TYPE *array)
{
  ARRAY_TYPE gap = ARRAY_SIZE;
  ARRAY_TYPE swaps = 0;

  while (gap != 1 || swaps != 0)
  {
    gap /= 1.25;
    gap = gap < 1 ? 1 : gap;
    swaps = 0;

    for (size_t i = 0; i + gap < ARRAY_SIZE; ++i)
    {
      if (array[i] > array[i + gap])
      {
        array_swap(array, i, i + gap);
        swaps = 1;
      }
    }
  }
}
