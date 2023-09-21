#include <stdio.h>
#include <stdlib.h>

#include "equ.h"
#include "events.h"
#include "main_type.h"

int main(void) {
  choices c;
  boolean quit = false;
  while (!quit) {
    eventHandler(&c);
    if (c == 0) {
      printf("throw: %d\n", add(12, 12));
    } else if (c == 1) {
      printf("throw: %d\n", sub(12, 12));
    } else {
      break;
    }
  }
  return EXIT_SUCCESS;
}