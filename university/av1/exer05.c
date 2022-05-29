#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void header() {
  printf("\n----------------------------------------------------------\n");
  printf("\t--- Exercício 5 - Multiplicação de matrizes ---");
  printf("\n----------------------------------------------------------\n");
}

int ** createDynamicMatrix(int lines, int columns) {
  int ** matrixLines = calloc(lines, sizeof(int));

  if (matrixLines == NULL) {
    printf("\nErro ao alocar memória para a matriz.\n");

    return NULL;
  }

  for (int i = 0; i < lines; i++) {
    matrixLines[i] = calloc(columns, sizeof(int));

    if (matrixLines[i] == NULL) {
      printf("\nErro ao alocar memória para a matriz.\n");

      return NULL;
    }
  }

  return matrixLines;
}

int isValidMatrix(int columnsA, int linesB) {
  if (columnsA == linesB) {
    return 1;
  }
  else {
    return 0;
  }
}

int insertMatrixValues(int ** matrix, int lines, int columns) {
  for (int l = 0; l < lines; l++) {
    for (int c = 0; c < columns; c++) {
      printf("Digite o valor da posição [%d][%d]: ", l, c);
      scanf("%d", &matrix[l][c]);
    }
  }

  return 0;
}

int multiplyMatrix(int ** matrixA, int ** matrixB,
  int ** matrixC, int linesA, int columnsA, int columnsB) {
  int result = 0;

  for (int l = 0; l < linesA; l++) {
    for (int c = 0; c < columnsB; c++) {
      result = 0;

      for (int j = 0; j < columnsA; j++) {
        result += matrixA[l][j] * matrixB[j][c];
      }

      matrixC[l][c] = result;
    }
  }

  return 0;
}

void printMatrix(int ** matrix, int lines, int columns) {
  printf("\n\n == RESULTADO ==\n\n");

  for (int l = 0; l < lines; l++) {
    for (int c = 0; c < columns; c++) {
      printf("| %d ", matrix[l][c]);
    }
    printf("|");
    printf("\n");
  }
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  int linesA, columnsA, linesB, columnsB;
  int ** matrixA, ** matrixB, ** matrixC;

  header();

  printf("Digite o número de linhas da matriz A: ");
  scanf("%d", &linesA);

  printf("Digite o número de colunas da matriz A: ");
  scanf("%d", &columnsA);

  printf("Digite o número de linhas da matriz B: ");
  scanf("%d", &linesB);

  printf("Digite o número de colunas da matriz B: ");
  scanf("%d", &columnsB);

  while (1) {
    if (isValidMatrix(columnsA, linesB)) {
      break;
    }
    else {
      printf("\nMatrizes não podem ser multiplicadas. ");
      printf("Tente novamente!\n\n");

      printf("Digite o número de linhas da matriz A: ");
      scanf("%d", &linesA);

      printf("Digite o número de colunas da matriz A: ");
      scanf("%d", &columnsA);

      printf("Digite o número de linhas da matriz B: ");
      scanf("%d", &linesB);

      printf("Digite o número de colunas da matriz B: ");
      scanf("%d", &columnsB);
    }
  }

  matrixA = createDynamicMatrix(linesA, columnsA);
  matrixB = createDynamicMatrix(linesB, columnsB);
  matrixC = createDynamicMatrix(linesA, columnsB);

  printf("\n\n== Insira os valores da matrix A ==\n\n");
  insertMatrixValues(matrixA, linesA, columnsA);

  printf("\n\n== Insira os valores da matrix B ==\n\n");
  insertMatrixValues(matrixB, linesB, columnsB);

  multiplyMatrix(matrixA, matrixB, matrixC, linesA, columnsA, columnsB);

  printMatrix(matrixC, linesA, columnsB);

  free(matrixA);
  free(matrixB);
  free(matrixC);

  return 0;
}