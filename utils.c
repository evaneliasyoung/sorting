/**
*  @file      utils.c
*  @brief     General utilities.
*
*  @author    Evan Elias Young
*  @date      2020-02-03
*  @date      2020-02-03
*  @copyright Copyright 2020 Evan Elias Young. All rights reserved.
*/

#include "pch.h"

/**
* @brief Swaps two elements in an array.
*
* @param array A pointer to the array.
* @param i The index of the first element.
* @param j The index of the second element.
*/
void array_swap(ARRAY_TYPE *array, size_t i, size_t j)
{
  ARRAY_TYPE tmp = array[i];
  array[i] = array[j];
  array[j] = tmp;
}

/**
* @brief Fills an array with ascending numbers.
*
* @param array A pointer to the array to fill.
*/
void fill_array(ARRAY_TYPE *array)
{
  for (size_t i = 0; i < ARRAY_SIZE + 1; ++i)
  {
    array[i] = i + 1;
  }
}

/**
* @brief Shuffles an array.
*
* @param array A pointer to the array to shuffle.
* @param factor The percentage to shuffle the array.
*/
void shuffle_array(ARRAY_TYPE *array, double factor)
{
  for (size_t i = 0; i < ARRAY_SIZE / (2 / factor); ++i)
  {
    array_swap(array, i, rand() % ARRAY_SIZE);
  }
}

/**
* @brief Reverses an array.
*
* @param array A pointer to the array to reverse.
*/
void reverse_array(ARRAY_TYPE *array)
{
  for (size_t i = 0; i < ARRAY_SIZE / 2; ++i)
  {
  }
}

/**
* @brief Creates an array which has been filled and randomized.
*
* @return ARRAY_TYPE* A pointer to newly created array.
*/
ARRAY_TYPE *create_array()
{
  ARRAY_TYPE *array = malloc(sizeof(ARRAY_TYPE) * ARRAY_SIZE);
  fill_array(array);
  return array;
}

/**
* @brief Clones an array.
*
* @param original The array to clone.
* @return ARRAY_TYPE* A pointer to the cloned array.
*/
ARRAY_TYPE *clone_array(ARRAY_TYPE *original)
{
  ARRAY_TYPE *array = malloc(sizeof(ARRAY_TYPE) * ARRAY_SIZE);

  for (size_t i = 0; i < ARRAY_SIZE; ++i)
  {
    array[i] = original[i];
  }
  return array;
}

/**
* @brief Prints an array to stdout.
*
* @param array A pointer to the array to print.
*/
void print_array(ARRAY_TYPE *array)
{
  for (size_t i = 0; i < ARRAY_SIZE; ++i)
  {
    printf("%i=>%i\n", i, array[i]);
  }
}

/**
* @brief Times a sorting function.
*
* @param f The function to time.
* @param array A pointer to the array to sort.
* @return double The amount of seconds elapsed.
*/
double time_sort(void (*f)(ARRAY_TYPE *), ARRAY_TYPE *array)
{
  clock_t t = clock();

  (*f)(array);
  t = clock() - t;

  return (double)(t) / CLOCKS_PER_SEC;
}
