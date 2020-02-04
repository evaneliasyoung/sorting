/**
*  @file      shell.c
*  @brief     Shell sort.
*
*  @author    Evan Elias Young
*  @date      2020-02-03
*  @date      2020-02-03
*  @copyright Copyright 2020 Evan Elias Young. All rights reserved.
*/

#include "pch.h"
#include "utils.h"

/**
* @brief Runs the shell sort.
*
* @param array The array to sort.
*/
void run_shell(ARRAY_TYPE *array)
{
  ARRAY_TYPE tmp;
  size_t interval = 0;
  size_t inner = 0;

  while (interval < ARRAY_SIZE / 3)
  {
    interval = interval * 3 + 1;
  }

  while (interval > 0)
  {
    for (size_t outer = interval; outer < ARRAY_SIZE; ++outer)
    {
      tmp = array[outer];
      inner = outer;

      while (inner > interval - 1 && array[inner - interval] >= tmp)
      {
        array[inner] = array[inner - interval];
        inner -= interval;
      }

      array[inner] = tmp;
    }
    interval = (interval - 1) / 3;
  }
}
