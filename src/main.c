//
// main.c
//
// Description: This is the main entry point for the emulator.
//              It is responsible for initializing the memory and CPU (CPU based on 6502)
//

#include <stdio.h>
#include <stdlib.h>

#include "cpu.h"
#include "memory.h"
#include "utils.h"

int main(int argc, char* argv[]) {
  if(argc != 2) {
    print_error("Usage: <ROM>");
  }

  memory_init();
  cpu_init();

  return EXIT_SUCCESS;
}

