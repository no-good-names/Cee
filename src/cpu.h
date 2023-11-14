#ifndef CPU_H_
#define CPU_H_

#include <stdint.h>

#include "memory.h"

typedef struct {
  uint8_t registers[16];
} Cpu_t;

#define ROM_START 0x1
#define ROM_END 0xF

void cpu_init(void);
void cpu_print_registers(void);

#endif /* CPU_H_ */

