#include <stdio.h>
#include <stdlib.h>

int main() {
  char word;

  printf("Digite uma letra: ");
  word = getchar();

  printf("Caracter lido: %c", word);

  return 0;
}