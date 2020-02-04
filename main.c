/**
*  @file      main.c
*  @brief     Main entry-point.
*
*  @author    Evan Elias Young
*  @date      2020-02-03
*  @date      2020-02-03
*  @copyright Copyright 2020 Evan Elias Young. All rights reserved.
*/

#include "pch.h"
#include "utils.h"

#include "insertion.h"
#include "selection.h"
#include "bubble.h"
#include "shell.h"

void run_sorts(ARRAY_TYPE *array)
{
  char names[NUM_ALGS][15] = {
      "Insertion Sort\0",
      "Bubble Sort   \0",
      "Selection Sort\0",
      "Shell Sort    \0"};
  void (*funcs[NUM_ALGS])(ARRAY_TYPE *) = {
      run_insertion,
      run_bubble,
      run_selection,
      run_shell};

  ARRAY_TYPE *tmp_array;

  for (size_t i = 0; i < NUM_ALGS; ++i)
  {
    tmp_array = clone_array(array);
    printf("%s => %0.2fs\n", names[i], time_sort(funcs[i], tmp_array));
    free(tmp_array);
  }
}

int main(int argc, char const *argv[])
{
  srand(time(NULL));
  ARRAY_TYPE *original_array = create_array();
  ARRAY_TYPE *rand_array = clone_array(original_array);
  ARRAY_TYPE *part_array = clone_array(original_array);
  ARRAY_TYPE *rev_array = clone_array(original_array);

  shuffle_array(rand_array, FULL_RAND);
  shuffle_array(part_array, PART_RAND);
  reverse_array(rev_array);

  printf("[%d] %0.0f%% Random\n", ARRAY_SIZE, FULL_RAND * 100);
  run_sorts(rand_array);

  printf("[%d] %0.0f%% Random\n", ARRAY_SIZE, PART_RAND * 100);
  run_sorts(part_array);

  printf("[%d] Reverse\n", ARRAY_SIZE);
  run_sorts(rev_array);

  return 0;
}
