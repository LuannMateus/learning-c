#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Alocação dinâmica de memória com a função malloc.

  * Essa função retorna um ponteiro para região de memória alocada ou NULL.
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  int * x;

  x = malloc(sizeof(int));

  if (x) {
    printf("\nMemória alocada com sucesso!");
    printf("\nx: %d", *x);

    *x = 50;

    printf("\nx: %d", *x);
  }
  else {
    printf("\nErro ao alocar memória!");
  }
}