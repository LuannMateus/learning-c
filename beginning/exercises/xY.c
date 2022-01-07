/*
  * Leia coordenadas X Y e diga o quadrante a que pertencem
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int x, y;

  do
  {
    printf("\nDigite as coordenadas (x, y): ");
    scanf("%d%d", &x, &y);

    if (x != 0 && y != 0) {
      if (x >= 0 && y >= 0) {
        printf("\nQuadrante 1!");
      }
      else if (x < 0 && y >= 0) {
        printf("\nQuadrante 2!");
      }
      else if (x < 0 && y < 0) {
        printf("\nQuadrante 3!");
      }
      else {
        printf("\nQuadrante 4!");
      }
    }

  } while (x != 0 && y != 0);

  printf("\nFim...");

  return 0;
}