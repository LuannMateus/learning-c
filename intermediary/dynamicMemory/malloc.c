#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Aloca��o din�mica de mem�ria com a fun��o malloc.

  * Essa fun��o retorna um ponteiro para regi�o de mem�ria alocada ou NULL.
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  int * x;

  x = malloc(sizeof(int));

  if (x) {
    printf("\nMem�ria alocada com sucesso!");
    printf("\nx: %d", *x);

    *x = 50;

    printf("\nx: %d", *x);
  }
  else {
    printf("\nErro ao alocar mem�ria!");
  }
}