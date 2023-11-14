#ifndef MEMORY_H_
#define MEMORY_H_

#define MEMORY_SIZE 4096

#include <stdint.h>

typedef struct {
    uint8_t memory[MEMORY_SIZE];
} Memory_t;

void memory_init();

#endif /* MEMORY_H_ */