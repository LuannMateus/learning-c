#include <stdio.h>
#include <stdlib.h>


int recursiveDecToBin(int x);

int main() {
  int value;

  printf("\nDigite um valor decimal para ser convertido: ");
  scanf("%d", &value);

  recursiveDecToBin(value);

  return 0;
}

int recursiveDecToBin(int x) {
  if (x == 0) {
    printf("%d", x);
  }
  else {
    recursiveDecToBin(x / 2);

    printf("%d", x % 2);
  }
}