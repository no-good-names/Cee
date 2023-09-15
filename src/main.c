#include <stdio.h>
#include <stdlib.h>

int choice(int x, int a, int b);

int main(void) {
  int x = 0;
  int a = 0;
  int b = 0;
  scanf("%d", &x);
  scanf("%d", &a);
  scanf("%d", &b);
  choice(x, a, b);
  return EXIT_SUCCESS;
}