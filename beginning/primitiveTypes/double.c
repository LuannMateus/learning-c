#include <stdio.h>
#include <stdlib.h>

// * Operador double para armazenar valores altos
// * Referênciado por %lf

int main() {
  double x = 3.1415;

  printf("Tamanho de x: %d bytes", sizeof x);
  printf("\nValor de x: %lf", x);

  return 0;
}