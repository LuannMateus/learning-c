#include <stdio.h>
#include <stdlib.h>

int recursiveInvertedValuesFromVector(int vec[], int size, int index);

int main() {
  int vec[10] = { 11, 258, 320, 43, 10, 23, 34, 88, 19, 999 }, index = 0;

  recursivePrint(vec, 10);

  recursiveInvertedValuesFromVector(vec, 0, 9);

  printf("\n");

  recursivePrint(vec, 10);

  return 0;
}

void recursivePrint(int vec[], int size) {
  if (size == 1) {
    printf("%d ", vec[size - 1]);
  }
  else {
    recursivePrint(vec, size - 1);
    printf("%d ", vec[size - 1]);
  }
}

int recursiveInvertedValuesFromVector(int vec[], int beggin, int end) {
  int aux;

  if (beggin < end) {
    aux = vec[beggin];
    vec[beggin] = vec[end];
    vec[end] = aux;

    recursiveInvertedValuesFromVector(vec, beggin + 1, end - 1);
  }

}