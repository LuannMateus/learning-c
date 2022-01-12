#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  *Aloca��o din�mica de mem�ria com a fun��o calloc.

  * Par�metros:
    * 1 : Quantidade de vari�veis.
    * 2 : Espa�o a ser alocado para cada vari�vel.
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  int * x;

  x = calloc(1, sizeof(int));

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