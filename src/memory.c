#include <stdio.h>

#include "memory.h"

void initMem(Memory *memory) {
    for (int i = 0; i < MEMORY_SIZE; i++) {
        memory->memory[i] = 0;
    }
}

