#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Estruturas condicionais - If and else

  se (x < 0) {
    true
  } else {
    false
  }
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  int x = 10;

  printf("\nDigite um valor inteiro qualquer: ");
  scanf("%d", &x);

  if (x < 0) {
    printf("\n\tValor negativo!\n");
    printf("\n\tValor negativo indentado!\n");
  }
  else {
    printf("\n\tValor positivo!\n");
    printf("\n\tValor positivo indentado!\n");
  }

  printf("\n....");

  return 0;
}