#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Estruturas condicionais - else If

  se (x < 0) {
    true
  } se nãe se () {
    true
  } else {
    false
  }
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  int x = 0;

  printf("\nDigite um valor inteiro qualquer: ");
  scanf("%d", &x);

  if (x < 0) {
    printf("\n\tValor negativo!\n");

  }
  else if (x == 0) {
    printf("\n\tValor igual a zero!\n");
  }
  else {
    printf("\n\tValor positivo!\n");
  }

  printf("\n....");

  return 0;
}