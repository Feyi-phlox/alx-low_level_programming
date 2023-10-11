#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/* mandatory tasks 0-6 */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* advanced tasks 6- */

int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
#endif
