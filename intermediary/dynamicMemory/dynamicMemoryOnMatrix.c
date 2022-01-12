#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int ** mat, l, c;
  srand(time(NULL));

  mat = malloc(4 * sizeof(int *));

  for (l = 0; l < 4; l++) {
    mat[l] = malloc(3 * sizeof(int));
  }

  for (l = 0; l < 4; l++) {
    for (c = 0; c < 3; c++) {
      mat[l][c] = rand() % 100;
    }
  }

  for (l = 0; l < 4; l++) {
    for (c = 0; c < 3; c++) {
      printf("%2d ", mat[l][c]);
    }
    printf("\n");
  }


}