#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int vec[] = { 10, 20, 30 ,40 , 50 };

  print(vec, 5);
}

void print(int vec[], int size) {

  for (int i = 0; i < size; i++) {
    printf("%d ", *(vec + i));
  }
}