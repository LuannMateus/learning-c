#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Lendo uma string com scaf().

  * scanf("%80[^\n]", str);
    * 80 -> Quantidade caracteres a ser lido.
    * [^\n] -> Indica que a leitura termina quando houver quabra de linha.
*/

int main() {
  const TOTAL_CHARACTERE = 20;
  char name[TOTAL_CHARACTERE];

  printf("\nDigite o seu nome: ");
  scanf("%19[^\n]", name);

  printf("%s", name);

  return 0;
}