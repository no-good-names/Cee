#include <stdio.h>
#include <stdlib.h>

#include "cpu.h"
#include "memory.h"

int main(int argc, char* argv[]) {
  if (argc != 2) {
    printf("Usage: %s <rom>\n", argv[0]);
    return EXIT_FAILURE;
  }

  memory_init();
  cpu_init();
  cpu_print_registers();

  return EXIT_SUCCESS;
}

