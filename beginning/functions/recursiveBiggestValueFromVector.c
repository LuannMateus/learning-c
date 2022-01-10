#include <stdio.h>
#include <stdlib.h>

int recursiveBiggestValueFromVector(int vec[], int size, int index);

int main() {
  int vec[10] = { 11, 258, 320, 43, 10, 23, 34, 88, 19, 999 }, index = 0;

  printf("Maior valor: %d\n", recursiveBiggestValueFromVector(vec, 10, index));

  return 0;
}

int recursiveBiggestValueFromVector(int vec[], int size, int index) {
  if (size == 0) {
    return vec[index];
  }
  else {
    if (vec[size - 1] > vec[index]) {
      return recursiveBiggestValueFromVector(vec, size - 1, size - 1);
    }
    else {
      return recursiveBiggestValueFromVector(vec, size - 1, index);
    }
  }
}