#include <stdio.h>
#include <stdlib.h>

/*
  * Operadores relacionais

  * menor que (x < y)
  * maior que (x > y)
  * menor ou igual (x <= y)
  * maior ou igual (x>= y)
  * igual (x == y)
  * diferente (x != y)
*/

int main() {

  int x = 10, y = 20;

  printf("\n%d", x > y);
  printf("\n%d", x < y);
  printf("\n%d", x >= y);
  printf("\n%d", x <= y);
  printf("\n%d", x == y);
  printf("\n%d", x != y);

  return 0;
}