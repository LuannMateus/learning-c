#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int * x1;
  float * x2;
  double * x3;
  char * x4;

  // * O valor de um ponteiro é o mesmo para qualquer tipo primitivo

  printf("\nValor de uma variável ponteiro: %d bytes", sizeof(x1));
  printf("\nValor de uma variável ponteiro: %d bytes", sizeof(x2));
  printf("\nValor de uma variável ponteiro: %d bytes", sizeof(x3));
  printf("\nValor de uma variável ponteiro: %d bytes", sizeof(x4));
}