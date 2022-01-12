#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int A = 10, * B, ** C, *** D;

  printf("\nDigite um valor: ");
  scanf("%d", &A);

  B = &A;
  C = &B;
  D = &C;

  printf("\nO dobro de %d: %d", A, 2 * *B, 3 * **C, 4 * ***D);
  printf("\nO triplo de %d: %d", A, 3 * **C);
  printf("\nO quádruplo de %d: %d", A, 4 * ***D);
}