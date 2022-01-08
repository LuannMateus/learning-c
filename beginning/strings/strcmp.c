#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
  * Comparação de strings().

  * strcmp(stringToCompare, stringCompared);

  *  0 -> as strings são iguais.
  * -1 -> a string 1 é diferente e vem antes da string 2.
  *  1 -> a string 1 é diferente e vem depois da string 2.
*/

int main() {
  char word1[50] = { "Amazing programming language = " };
  char word2[50] = { "C language." };

  printf("\nResultado: %d\n", strcmp(word1, word2));

  return 0;
}