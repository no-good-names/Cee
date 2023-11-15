#ifndef UTILS_H_
#define UTILS_H_

#include <stdio.h>

#define MAX_SIZE 100
#define ASSERT(condition, message) \
    do { \
        if (!(condition)) { \
            fprintf(stderr, "%s:%d: %s\n", __FILE__, __LINE__, message); \
            exit(EXIT_FAILURE); \
        } \
    } while (0

void print_array(int *array, int size);
void swap(int *a, int *b);

#endif /* UTILS_H_ */