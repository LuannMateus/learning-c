#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
  * Liberar memória com a função free().

  * Parametrôs:
    * 1: Variável.
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  srand(time(NULL));

  int * vec, size;

  printf("\nDigite o tamanho do vetor: ");
  scanf("%d", &size);

  vec = malloc(size * sizeof(int));

  if (vec) {
    printf("\nMemória alocada com sucesso!");

    for (int i = 0; i < size; i++) {
      *(vec + i) = rand() % 10;
    }

    printf("\n");

    for (int i = 0; i < size; i++) {
      printf("%d ", *(vec + i));
    }

    printf("\n");

    printf("\nDigite um novo tamanho para o vetor: ");
    scanf("%d", &size);

    vec = realloc(vec, size);

    printf("\nTamanho realocado com sucesso!\n");

    for (int i = 0; i < size; i++) {
      printf("%d ", *(vec + i));
    }

    // * Liberando memória.
    free(vec);
  }
  else {
    printf("\nErro ao alocar memória!");
  }
}