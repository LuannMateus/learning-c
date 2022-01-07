#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
  * Matriz (Array multidimensional homogêneo) -> [][]
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  int mat1[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

  int mat2[][3] = { 1, 2, 3, 4, 5, 6 };
  int mat3[3][3] = { 0 };

  float mat4[3][5];

  char mat5[3][3];

  // * Leitura de uma matriz
  for (int l = 0; l < 3; l++) {
    printf("[");
    for (int c = 0; c < 3; c++) {
      printf(" %d ", mat1[l][c]);
    }
    printf("]\n");
  }

  // * Adicionar valores a matriz pelo teclado
  int scanfMatrix[3][3];

  for (int l = 0; l < 3; l++) {
    for (int c = 0; c < 3; c++) {
      printf("\nDigite o valor [%d][%d]: ", l, c);
      scanf("%d", &scanfMatrix[l][c]);
    }
  }

  for (int l = 0; l < 3; l++) {
    printf("[");
    for (int c = 0; c < 3; c++) {
      printf("%4d  ", scanfMatrix[l][c]);
    }
    printf("]\n");
  }


  // * Alterando valores da matriz;
  printf("\n");

  for (int l = 0; l < 3; l++) {
    for (int c = 0; c < 3; c++) {
      scanfMatrix[l][c] = c;
    }
  }

  for (int l = 0; l < 3; l++) {
    printf("[");
    for (int c = 0; c < 3; c++) {
      printf("%4d  ", scanfMatrix[l][c]);
    }
    printf("]\n");
  }

  // *  Somar duas matrizes e salvar o resultado em uma terceira matriz
  int sumOfMatrix[3][3];
  int matrizToBeSummed[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };


  for (int l = 0; l < 3; l++) {
    for (int c = 0; c < 3; c++) {
      sumOfMatrix[l][c] = matrizToBeSummed[l][c] + matrizToBeSummed[l][c];
    }
  }

  for (int l = 0; l < 3; l++) {
    printf("[");
    for (int c = 0; c < 3; c++) {
      printf("%4d  ", sumOfMatrix[l][c]);
    }
    printf("]\n");
  }

  // * Preenchendo a matriz com números aleatórios
  int randMatrix[3][3];
  srand(time(NULL));

  for (int l = 0; l < 3; l++) {
    for (int c = 0; c < 3; c++) {
      randMatrix[l][c] = 1 + rand() % 100;
    }
  }

  for (int l = 0; l < 3; l++) {
    printf("[");
    for (int c = 0; c < 3; c++) {
      printf("%4d  ", randMatrix[l][c]);
    }
    printf("]\n");
  }

  return 0;
}