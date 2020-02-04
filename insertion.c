/**
*  @file      insertion.c
*  @brief     Insertion sort.
*
*  @author    Evan Elias Young
*  @date      2020-02-03
*  @date      2020-02-03
*  @copyright Copyright 2020 Evan Elias Young. All rights reserved.
*/

#include "pch.h"
#include "utils.h"

/**
* @brief Runs the insertion sort.
*
* @param array The array to sort.
*/
void run_insertion(ARRAY_TYPE *array)
{
  ARRAY_TYPE tmp;
  size_t j;

  for (size_t i = 1; i < ARRAY_SIZE; ++i)
  {
    j = i;
    while (j > 0 && array[j] < array[j - 1])
    {
      tmp = array[j];
      array[j] = array[j - 1];
      array[--j] = tmp;
    }
  }
}
