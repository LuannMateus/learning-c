/*
Exerc�cio 3:
Fa�a um programa em C para trocar o valor de duas vari�veis inteiras sem utilizar nenhuma vari�vel auxiliar.
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