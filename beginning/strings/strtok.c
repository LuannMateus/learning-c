#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
  * Dividir uma string com strtok().

  * Sintaxe: strtok(string, condição de divisão);

  * Biblioteca -> <string.h>
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  char word[50] = { "Hello!World.Good Morning" };
  char copy[50] = { "" };
  char * pointer;

  pointer = strtok(word, "!. ");

  while (pointer) {
    printf("\nToken: %s", pointer);
    pointer = strtok(NULL, "!. ");
  }

  return 0;
}