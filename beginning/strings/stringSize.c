#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Descobir o tamanho de uma string
*/

int main() {
  char words[50] = { "Hello World!" };
  int length = 0;

  printf("\nDigite uma frase: ");
  fgets(words, 50, stdin);

  for (int i = 0; words[i] != '\0'; i++) {
    printf("%d = %d\n", i, words[i]);
    length++;
  }

  printf("\n");

  printf("\nTotal de caracteres: %d", length);

  return 0;
}