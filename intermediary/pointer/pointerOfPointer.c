#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int A = 100, * B, ** C;

  B = &A;
  C = &B;

  printf("Endereço de A: %p\tConteúdo de A: %d\n", &A, A);
  printf("Endereço de B: %p\tConteúdo de B: %p\n", &B, B);

  printf("Conteúdo apontado por B: %d\n", *B);
  printf("Enredeço de C: %p\tConteúdo de C: %p\n", &C, C);
  printf("Conteúdo apontado por C: %d\n", **C);
}