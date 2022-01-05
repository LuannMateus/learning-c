#include <stdio.h>
#include <stdlib.h>

// * Operador long para o tipo double
// * Pode ser referênciador por %Lf
// * No windows, será necessário usar a função __mingw_prinf() para mostrar o valor de um long double 

int main() {

  long double x = 3.14141414;

  printf("Tamanho de x: %d bytes", sizeof x);
  __mingw_printf("\nValor de x: %Lf", x);

  return 0;
}