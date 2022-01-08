#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
  * Localizando uma substring com strstr().

  * Biblioteca -> <string.h>
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  char word[50] = { "Hello World!" };

  printf("\nAntes: %s", word);

  strupr(word);
  printf("\nDepois - Maiúsculo: %s", word);
  strlwr(word);
  printf("\nDepois - Minúsculo: %s", word);


  return 0;
}