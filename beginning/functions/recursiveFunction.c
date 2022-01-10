#include <stdio.h>
#include <stdlib.h>

int c = 0;

int main() {
  int x = 10;

  recursivePrintCrescent(x);
  printf("\n");
  recursivePrintDescrecent(x);

  return 0;
}

void recursivePrintCrescent(int x) {
  c++;

  if (x == 0) {
    printf("%d ", x);
  }
  else {
    recursivePrintCrescent(x - 1);

    printf("%d ", x);
  }
}

void recursivePrintDescrecent(int x) {
  if (x == 0) {
    printf("%d ", x);
  }
  else {
    printf("%d ", x);
    recursivePrintDescrecent(x - 1);
  }
}