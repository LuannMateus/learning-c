#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int recursiveSumFrom1ToN(int x);

int main() {
  setlocale(LC_ALL, "Portuguese");

  int number;

  printf("Digite um número para somar: ");
  scanf("%d", &number);

  printf("\nSoma de 0 até %d: %d", number, recursiveSumFrom1ToN(number));
}

int recursiveSumFrom1ToN(int x) {
  if (x == 0) {
    return 0;
  }
  else {
    return x + recursiveSumFrom1ToN(x - 1);
  }
}