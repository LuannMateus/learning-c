#include <stdio.h>
#include <stdlib.h>

/*
  Casting
*/

int main() {
  int x = 10, y = 20;
  float PI = 3.1415;

  x = (int)PI;

  printf("Valor de x: %d", x);

  printf("\nDivisao: %f\n", x / (float)y);

  return 0;
}