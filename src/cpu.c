#include <stdio.h>

#include "cpu.h"
#include "memory.h"

void initCPU(CPU *cpu) {
    for(int i = 0; i < 16; i++) {
        cpu->registers[i] = 0;
    }
    cpu->pc = 0;
}
void loadProg(CPU *cpu, Memory *memory, int *program, int programSize) {
    for(int i = 0; i < programSize; i++) {
        memory->memory[ROM_START + i] = program[i];
    }
}
void executeInst(CPU *cpu);
