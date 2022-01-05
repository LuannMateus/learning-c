/*
Exercício 3:
Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma variável auxiliar.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int x, y;

  printf("Digite dois valores inteiros: ");
  scanf("%d%d", &x, &y);

  x = x + y;
  y = x - y;
  x = x - y;

  printf("X: %d\nY: %d", x, y);

  return 0;
}