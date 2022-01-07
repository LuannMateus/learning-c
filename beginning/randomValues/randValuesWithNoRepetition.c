#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  const ARRAY_SIZE = 25;
  unsigned int randomNums[ARRAY_SIZE], i = 0, equal = 0, count = 0;

  srand(time(NULL));

  do {
    randomNums[i] = rand() % 100;
    equal = 0;

    for (int j = 0; j < i; j++) {
      count++;
      if (randomNums[j] == randomNums[i]) {
        equal = 1;
      }
    }

    if (!equal) i++;

  } while (i < ARRAY_SIZE);

  printf("\n\n");

  for (int i = 0; i < ARRAY_SIZE; i++) {
    printf("%d ", randomNums[i]);
  }

  printf("\n\nTotal de ciclos: %d\n\n", count);

  return 0;
}