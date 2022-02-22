#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
  * Localizando uma substring com strstr().

  * Biblioteca -> <string.h>
*/

int main() {
  char * string = "HELLo";
  char word[50] = { "Hello World!" }, str[] = { "Hello" };
  char * pointer;

  pointer = strstr(word, str);

  if (pointer)
    printf("\n%c%c%c%c%c\n",
      *pointer, *(pointer + 1), *(pointer + 2), *(pointer + 3), *(pointer + 4));
  else
    printf("\nPonteiro nulo\n.");

  return 0;
}