#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Lendo uma string com fgets().

  * fgets(vetor, quantiade máxima de caracteres, stdin);
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  const TOTAL_CHARACTERE = 20;
  char name[TOTAL_CHARACTERE];

  printf("\nDigite o seu nome: ");
  fgets(name, TOTAL_CHARACTERE, stdin);

  printf("%s", name);

  return 0;
}