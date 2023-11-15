#ifndef CPU_H_
#define CPU_H_

#include <stdint.h>
#include "memory.h"

typedef struct {
  uint8_t registers[16];
  uint8_t pc;
} CPU;

#define ROM_START 0x200

void initCPU(CPU *cpu);
void loadProgram(CPU *cpu, Memory *memory, int *program, int programSize);
void executeInstruction(CPU *cpu);

#endif /* CPU_H_ */

