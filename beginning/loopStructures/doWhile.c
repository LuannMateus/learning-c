#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Estruturas de repeti��o: DO WHILE

  fa�a  {
    ...
  } enquanto (condi��o)
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  short int value = 0;

  do {
    printf("\nDigite um valor maior que zero: ");
    scanf("%hi", &value);

  } while (value <= 0);

  printf("\nValor lido: %hi", value);

  return 0;
}