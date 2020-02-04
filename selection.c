/**
*  @file      selection.c
*  @brief     Selection sort.
*
*  @author    Evan Elias Young
*  @date      2020-02-03
*  @date      2020-02-03
*  @copyright Copyright 2020 Evan Elias Young. All rights reserved.
*/

#include "pch.h"
#include "utils.h"

/**
* @brief Runs the selection sort.
*
* @param array The array to sort.
*/
void run_selection(ARRAY_TYPE *array)
{
  ARRAY_TYPE tmp;
  for (size_t i = 0; i < ARRAY_SIZE; ++i)
  {
    tmp = i;
    for (size_t j = i + 1; j < ARRAY_SIZE; ++j)
    {
      if (array[j] < array[tmp])
      {
        tmp = j;
      }
    }
    array_swap(array, tmp, i);
  }
}
