#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Identificar o fim de uma string().

  * Fim de uma string -> \0.
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  char phrase[30];

  printf("\nDigite uma frase: ");
  fgets(phrase, 30, stdin);

  for (int i = 0; phrase[i] != '\0'; i++) {
    if (phrase[i] == '\n') {
      phrase[i] = '\0';
    }
  }

  for (int i = 0; phrase[i] != '\0'; i++) {
    printf("\n%d", phrase[i]);
  }

  return 0;
}