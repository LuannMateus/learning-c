#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  srand(time(NULL));

  int vector[100], decrease = 100, aux, count = 0, change = 0;;

  for (int i = 0; i < 100; i++) {
    vector[i] = rand() % 100;
  }

  for (int i = 0; i < 100; i++) {
    printf("%d ", vector[i]);
  }

  for (int i = 0; i < 100; i++) {
    count++;
    for (int i = 0; i < 100; i++) {
      if (vector[i] > vector[i + 1]) {
        aux = vector[i + 1];
        vector[i + 1] = vector[i];
        vector[i] = aux;
      }
    }
  }

  printf("\n\n1 modificação - Total: %d\n", count);

  count = 0;
  for (int i = 0; i < 10; i++) {
    vector[i] = rand() % 100;
  }

  for (int i = 0; i < 100; i++) {
    count++;
    for (int i = 0; i < decrease; i++) {
      if (vector[i] > vector[i + 1]) {
        aux = vector[i + 1];
        vector[i + 1] = vector[i];
        vector[i] = aux;
      }
    }
    decrease--;
  }

  printf("\n2 modificação - Total: %d\n", count);
  printf("\n");

  decrease = 100;
  count = 0;
  for (int i = 0; i < 100; i++) {
    vector[i] = rand() % 100;
  }

  do {
    change = 0;
    count++;
    for (int i = 0; i < decrease; i++) {
      if (vector[i] > vector[i + 1]) {
        aux = vector[i + 1];
        vector[i + 1] = vector[i];
        vector[i] = aux;
        change = 1;
      }
    }
    decrease--;
  } while (change);

  printf("3 modificação - Total: %d", count);
  printf("\n\n");

  for (int i = 0; i < 100; i++) {
    printf("%d ", vector[i]);
  }

  return 0;
}