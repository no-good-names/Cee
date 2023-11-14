CC = gcc
SRC_DIR= src
BUILD_DIR= bin

CFLAGS = -Wall -Wextra -Werror -Wpedantic -std=c99 -g -O0

.PHONY: all clean run

OBJS= 	$(SRC_DIR)/main.c	\
		$(SRC_DIR)/cpu.c	\
		$(SRC_DIR)/memory.c	\

all: $(BUILD_DIR)/main

$(BUILD_DIR)/main: $(OBJS)
	@echo "Building..."
	@mkdir -p $(BUILD_DIR)
	@$(CC) $(OBJS) $(CFLAGS) -o $(BUILD_DIR)/main
	@echo "Building finished."

clean:
	@echo "Cleaning..."
	@rm -rf $(BUILD_DIR)
	@echo "Cleaning finished."

run: all
	@echo "running at $(BUILD_DIR)/main"
	@./$(BUILD_DIR)/main
