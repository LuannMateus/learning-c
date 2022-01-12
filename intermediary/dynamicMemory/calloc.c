#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  *Alocação dinâmica de memória com a função calloc.

  * Parâmetros:
    * 1 : Quantidade de variáveis.
    * 2 : Espaço a ser alocado para cada variável.
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  int * x;

  x = calloc(1, sizeof(int));

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