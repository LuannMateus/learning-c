#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
  * Descobir o tamanho de uma string com strlen().

  * Biblioteca -> <string.h>
*/

int main() {
  char words[50] = { "Hello World!" };

  printf("\nDigite uma frase: ");
  fgets(words, 50, stdin);

  printf("\nTotal de caracteres: %d", strlen(words));

  return 0;
}