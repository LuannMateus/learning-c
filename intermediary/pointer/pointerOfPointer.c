#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int A = 100, * B, ** C;

  B = &A;
  C = &B;

  printf("Endere�o de A: %p\tConte�do de A: %d\n", &A, A);
  printf("Endere�o de B: %p\tConte�do de B: %p\n", &B, B);

  printf("Conte�do apontado por B: %d\n", *B);
  printf("Enrede�o de C: %p\tConte�do de C: %p\n", &C, C);
  printf("Conte�do apontado por C: %d\n", **C);
}