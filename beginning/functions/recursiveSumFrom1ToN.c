#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int recursiveSumFrom1ToN(int x);

int main() {
  setlocale(LC_ALL, "Portuguese");

  int number;

  printf("Digite um n�mero para somar: ");
  scanf("%d", &number);

  printf("\nSoma de 0 at� %d: %d", number, recursiveSumFrom1ToN(number));
}

int recursiveSumFrom1ToN(int x) {
  if (x == 0) {
    return 0;
  }
  else {
    return x + recursiveSumFrom1ToN(x - 1);
  }
}