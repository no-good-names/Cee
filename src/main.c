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
		printf("Usage: %s <rom>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	
	FILE *rom = fopen(argv[1], "r");
	if(rom == NULL) {
		printf("Error: Could not open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	int programSize = 0;
	int *program = readProgram(rom, &programSize);

	CPU cpu;
	Memory memory;

	initCPU(&cpu);

	initMem(&memory);

	loadProg(&cpu, &memory, program, programSize);

	return EXIT_SUCCESS;
}

