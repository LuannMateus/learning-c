#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Estruturas condicionais aninhadas - If and else

  if (true) {
    if (true) {
      true
    } else {
      false
    }
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
    printf("\nValor negativo!");
  }
  else {
    if (x > 0) {
      printf("\nValor positivo!");
    }
    else {
      printf("\nValor igual a 0!");
    }
  }

  return 0;
}