#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
  * Concatenar strings com strcat().

  * strcat(string1, string2);
*/

int main() {
  char word1[50] = { "Amazing programming language = " };
  char word2[50] = { "C language." };
  char word3[50] = { "Coolest programming language = " };

  strcat(word1, word2);
  printf("\n%s\n", word1);

  strcat(word3, "Javascript");
  printf("\n%s\n", word3);

  return 0;
}