#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
  * Copiando strings com strcpy().

  * Sintaxe -> strcpy(vari�vel para receber a c�pia, vari�vel a ser copiada);
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  char word1[50] = { "Amazing programming language = " };
  char word2[50] = { "C language." };

  printf("\nAntes da c�pia: %s\n", word2);

  strcpy(word2, word1);

  printf("\nDepois da c�pia: %s\n", word2);

  return 0;
}