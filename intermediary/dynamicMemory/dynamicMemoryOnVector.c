#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

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
  }
  else {
    printf("\nErro ao alocar memória!");
  }
}