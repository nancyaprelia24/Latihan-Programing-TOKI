#include <stdio.h>

int main() {
  int b1, b2, temp;
  b1 = 1;
  b2 = 3;

  temp = b1;
  b1 = b2;
  b2 = temp;
  printf("%d %d\n", b1, b2);
}
