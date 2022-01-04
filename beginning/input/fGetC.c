#include <stdio.h>
#include <stdlib.h>

int main() {
  char word;

  printf("Digite uma letra: ");
  word = fgetc(stdin);

  printf("Caracter lido: %c", word);

  return 0;
}