#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
  * Procurar caracteres em uma string com strchr() e strrchr().

  * strchr -> Retorna a primeira ocorr�ncia.
  * strrchr -> Retorna a �ltima ocorr�ncia.

  * Sintaxe: strchr()
  * Sintaxe: strrchr()
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  char phrase[50] = { "Amazing programming language = " };
  char * word;

  // * Primeira ocorr�ncia
  word = strchr(phrase, 'a');
  printf("\n%c\n", *word);
  printf("\n%c\n", *(word + 1));

  // * �ltima occor�ncia
  word = strrchr(phrase, 'e');
  printf("\n%c\n", *word);
  printf("\n%c\n", *(word + 2));

  return 0;
}