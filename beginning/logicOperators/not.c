#include <stdio.h>
#include <stdlib.h>

/*
  * Operador l�gico de nega��o (NOT) ->  !
*/

int main() {

  short x = 0;

  printf("\nDigite um valor inteiro qualquer: ");
  scanf("%d", &x);

  if (!(x < 0)) {

    printf("\nValor maior ou igual a zero!");
  }
  else {
    printf("\nValor menor que zero!");
  }

  return 0;
}