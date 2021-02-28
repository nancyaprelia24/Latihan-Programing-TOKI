#include <stdio.h>

int main() {
  int b1, b2;
  b1 = 1;
  b2 = 3;

  b1 = b2;
  b2 = b1;
  printf("%d %d\n", b1, b2);
}
