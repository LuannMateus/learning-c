#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int recursiveSumFromVector(int x[], int size);

int main() {
  setlocale(LC_ALL, "Portuguese");

  int numbers[] = { 1, 2, 3, 4, 5, 6, 7 ,8 ,9 ,10 };

  printf("\nSoma do vetor: %d", recursiveSumFromVector(numbers, 10));
}

int recursiveSumFromVector(int x[], int size) {
  if (size == 0) {
    return 0;
  }
  else {
    return x[size - 1] + recursiveSumFromVector(x, size - 1);
  }
}