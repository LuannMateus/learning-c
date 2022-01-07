#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Estruturas de repetição: FOR

  para (variável de contagem; condição da repetição; incremento ou decremento) {
    ...
  }
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  for (int i = 0; i < 10; i++) {
    printf("\n%d", i);
  }

  printf("\nFim do loop (ORDEM CRESCENTE)...");

  for (int i = 9; i >= 0; i--) {
    printf("\n%d", i);
  }

  printf("\nFim do loop (ORDEM DECRESCENTE)...");

  for (int i = 0; i < 10; i += 2) {
    printf("\n%d", i);
  }

  printf("\nFim do loop (PULANDO 2 EM 2)...");

  return 0;
}