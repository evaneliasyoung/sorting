/**
*  @file      quick.c
*  @brief     Quick sort.
*
*  @author    Evan Elias Young
*  @date      2020-02-06
*  @date      2020-02-06
*  @copyright Copyright 2020 Evan Elias Young. All rights reserved.
*/

#include "pch.h"
#include "utils.h"

/**
* @brief The actual quick sort algorithm.
*
* @param array The array to sort.
* @param l The low index.
* @param h The high index.
*/
void actual_quick(ARRAY_TYPE *array, int l, int h)
{
  int i;
  int j;
  int p;
  ARRAY_TYPE tmp;
  if (l < h)
  {
    p = (l + h) / 2;
    array_swap(array, l, p);
    tmp = array[l];
    i = l + 1;
    j = h;

    while (i <= j)
    {
      while ((i <= h) && (array[i] <= tmp))
      {
        i++;
      }
      while ((j >= l) && (array[j] > tmp))
      {
        j--;
      }
      if (i < j)
      {
        array_swap(array, i, j);
      }
    }
    array_swap(array, l, j);

    actual_quick(array, l, j - 1);
    actual_quick(array, j + 1, h);
  }
}

/**
* @brief Runs the quick sort.
*
* @param array The array to sort.
*/
void run_quick(ARRAY_TYPE *array)
{
  actual_quick(array, 0, ARRAY_SIZE - 1);
}
