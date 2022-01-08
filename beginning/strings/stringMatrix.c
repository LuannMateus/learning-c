#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Matriz de string.
*/

int main() {
  char names[2][25];

  for (int i = 0; i < 2; i++) {
    printf("\nDigite o [%d] nome: ", i);
    scanf(" %25[^\n]", names[i]);
    // fgets(names[i], 25, stdin);
  }

  for (int i = 0; i < 2; i++) {
    printf("\nNome %d: %s", i, names[i]);
  }

  return 0;
}