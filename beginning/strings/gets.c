#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Lendo uma string com gets().
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  const TOTAL_CHARACTERE = 20;
  char name[TOTAL_CHARACTERE];

  printf("\nDigite o seu nome: ");
  gets(name);

  printf("%s", name);

  return 0;
}