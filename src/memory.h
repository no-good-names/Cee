#ifndef MEMORY_H_
#define MEMORY_H_

#include <stdint.h>

#define MEMORY_SIZE 4096

typedef struct {
    uint8_t memory[MEMORY_SIZE]; // 4KB of memory
} Memory;

void initMem(Memory *memory);

#endif /* MEMORY_H_ */

