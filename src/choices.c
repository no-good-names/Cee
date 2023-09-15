#include <stdio.h>

#include "choices.h"
#include "main_type.h"

int addition(int a, int b);
int subtract(int a, int b);

int choice(int x, int a, int b) {
  if (x == 1) {
    list[0] = 1;
  } else if (x == 2) {
    list[1] = 1;
  }
  if (!list[0]) {
    return addition(a, b);
  } else if (!list[1]) {
    return subtract(a, b);
  }
}
