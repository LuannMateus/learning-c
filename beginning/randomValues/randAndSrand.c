#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int randomNum[10];

  srand(time(NULL));

  for (int i = 0; i < 10; i++) {
    randomNum[i] = rand();
  }

  for (int i = 0; i < 10; i++) {
    printf("\t%d", randomNum[i]);
  }

  return 0;
}