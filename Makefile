CC = gcc
SRC_DIR= src
BUILD_DIR= bin

.PHONY: all clean run

OBJS= $(SRC_DIR)/main.c

all: $(BUILD_DIR)/main

$(BUILD_DIR)/main: $(SRC_DIR)/main.c
	@echo "Building..."
	@mkdir -p $(BUILD_DIR)
	@$(CC) $(OBJS) -o $(BUILD_DIR)/main
	@echo "Building finished."

clean:
	@echo "Cleaning..."
	@rm -rf $(BUILD_DIR)
	@echo "Cleaning finished."

run: all
	@echo "Running..."
	@./$(BUILD_DIR)/main
	@echo "Task finished."