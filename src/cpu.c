#include <stdio.h>

#include "cpu.h"
#include "memory.h"

Cpu_t Cpu;

void cpu_init(void) {
    for(int i = 0; i < ROM_END; i++) {
        Cpu.registers[i] = 0;
    }
}

void cpu_print_registers(void) {
    for(int i = 0; i < ROM_END; i++) {
        printf("V%X: %X\n", i, Cpu.registers[i]);
    }
}

