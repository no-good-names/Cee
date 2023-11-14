#include <stdio.h>

#include "memory.h"

Memory_t Memory;

void memory_init(void) {
    for(int i = 0; i < MEMORY_SIZE; i++) {
        Memory.memory[i] = 0;
    }
}

