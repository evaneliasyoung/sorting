/**
*  @file      utils.h
*  @brief     General utilities.
*
*  @author    Evan Elias Young
*  @date      2020-02-03
*  @date      2020-02-06
*  @copyright Copyright 2020 Evan Elias Young. All rights reserved.
*/

#ifndef SORTING_UTILS_H_
#define SORTING_UTILS_H_

#include "pch.h"

/**
* @brief Swaps two elements in an array.
*
* @param array A pointer to the array.
* @param i The index of the first element.
* @param j The index of the second element.
*/
void array_swap(ARRAY_TYPE *array, size_t i, size_t j);

/**
* @brief Fills an array with ascending numbers.
*
* @param array A pointer to the array to fill.
*/
void fill_array(ARRAY_TYPE *array);

/**
* @brief Shuffles an array.
*
* @param array A pointer to the array to shuffle.
* @param factor The percentage to shuffle the array.
*/
void shuffle_array(ARRAY_TYPE *array, double factor);

/**
* @brief Reverses an array.
*
* @param array A pointer to the array to reverse.
*/
void reverse_array(ARRAY_TYPE *array);

/**
* @brief Creates an array which has been filled and randomized.
*
* @return ARRAY_TYPE* A pointer to newly created array.
*/
ARRAY_TYPE *create_array();

/**
* @brief Clones an array.
*
* @param original The array to clone.
* @return ARRAY_TYPE* A pointer to the cloned array.
*/
ARRAY_TYPE *clone_array(ARRAY_TYPE *original);

/**
* @brief Prints an array to stdout.
*
* @param array A pointer to the array to print.
*/
void print_array(ARRAY_TYPE *array);

/**
* @brief Times a sorting function.
*
* @param f The function to time.
* @param array A pointer to the array to sort.
* @return double The amount of seconds elapsed.
*/
double time_sort(void (*f)(ARRAY_TYPE *), ARRAY_TYPE *array);

#endif // SORTING_UTILS_H_
