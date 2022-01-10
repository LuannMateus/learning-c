#include <stdio.h>
#include <stdlib.h>

int recursivePower(int x, int y);

int main() {
  int x, y;

  printf("\nDigite o valor de x e y: ");
  scanf("%d%d", &x, &y);

  printf("\n%d ^ %d: %d\n", x, y, recursivePower(x, y));

  return 0;
}

int recursivePower(int x, int y) {
  if (y == 0) {
    return 1;
  }
  else {
    return x * recursivePower(x, y - 1);
  }
}