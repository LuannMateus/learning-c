#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * malloc() X calloc().
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  int i, * vec1, * vec2;

  vec1 = malloc(10 * sizeof(int));
  vec2 = calloc(10, sizeof(int));


  printf("\nMalloc function: \n");

  for (i = 0; i < 10; i++) {
    printf("%d ", *(vec1 + i));
  }

  printf("\n");

  printf("\nCalloc function: \n");
  for (i = 0; i < 10; i++) {
    printf("%d ", *(vec2 + i));
  }
}