//
// utils.c
//

#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

void print_error(const char* error) {
    fprintf(stderr, "Error: %s\n", error);
    exit(EXIT_FAILURE);
}