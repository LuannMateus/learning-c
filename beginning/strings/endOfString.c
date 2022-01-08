#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Identificar o fim de uma string().

  * Fim de uma string -> \0.
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  const TOTAL_CHARACTERE = 20;
  char name[TOTAL_CHARACTERE];
  int i = 0;

  printf("\nDigite o seu nome: ");
  fgets(name, TOTAL_CHARACTERE, stdin);

  while (name[i] != '\0') {
    printf("%d = %c\n", name[i], name[i]);
    i++;
  }
  printf("\n");

  for (int i = 0; name[i] != '\0'; i++) {
    printf("%d = %c\n", name[i], name[i]);
  }

  return 0;
}