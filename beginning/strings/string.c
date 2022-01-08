#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Cadeia de caracteres -> String

  * Pode ser referenciado por %s
*/

int main() {
  char string[] = { "Hello World!" };

  printf("\n%c\n", string[0]);

  printf("%s", string);

  return 0;
}