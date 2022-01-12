#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  char gender = 'M';
  char * word;

  word = &gender;

  printf("\nValor de gender: %c", gender);
  printf("\nEndereço de memória de gender: %p", &gender);

  printf("\nValor de word: %p", word);
  printf("\nEndereço de memória de word: %p", &word);
  printf("\nValor apontado: %c", *word);
}