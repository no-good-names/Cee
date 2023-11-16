#ifndef UTILS_H_
#define UTILS_H_

#include <stdio.h>

#define MAX_SIZE 100
#define ASSERT(condition, message) if (!(condition)) { fprintf(stderr, "%s\n", message); exit(1); }

void print_array(int *array, int size);
void swap(int *a, int *b);

#endif /* UTILS_H_ */