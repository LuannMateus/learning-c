#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Estruturas condicionais - If and else

  condition ? true : false
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  int x = 10;

  printf("\nDigite um valor inteiro qualquer: ");
  scanf("%d", &x);

  x < 0 ? printf("\n\tValor negativo!\n") :
    x > 0 ? printf("\nValor positivo!") : printf("\nValor igual a zero!");

  return 0;
}