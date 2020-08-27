#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <stdlib.h>
#include <stdio.h>


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int ileft, int iright);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);


#endif /* SEARCH_ALGOS */
