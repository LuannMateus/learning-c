#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Estruturas de repeti��o: WHILE

  enquanto (condi��o) {
    ...
  }
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  short int value = 0;

  printf("\nDigite um valor maior que zero: ");
  scanf("%hi", &value);

  while (value <= 0) {
    printf("\nValor inv�lido! Digite um valor maior que zero: ");
    scanf("%hi", &value);
  }

  printf("\nValor lido: %hi", value);

  return 0;
}