#include <stdio.h>
#include <stdlib.h>

/*
  * Estruturas condicioanis - If
*/

int main() {
  int x = 10;

  printf("\nDigite um valor inteiro qualquer: ");
  scanf("%d", &x);

  if (x < 0)
    printf("\n\tValor negativo!\n");

  printf("\n....");

  return 0;
}