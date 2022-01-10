#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int recursiveSumFromVector(int x[], int size);

int main() {
  setlocale(LC_ALL, "Portuguese");

  int x = 40;
  time_t tInit, tEnd;

  tInit = time(NULL);
  iterativeFibonacci(x);
  tEnd = time(NULL);
  printf("\n\tTempo em segundos da função iterativa: %fs", difftime(tEnd, tInit));

  tInit = time(NULL);
  recursiveFibonacci(x);
  tEnd = time(NULL);
  printf("\n\tTempo em segundos da função recursiva: %fs", difftime(tEnd, tInit));



}

int recursiveFibonacci(int x) {
  if (x == 1) {
    return 0;
  }
  else {
    if (x == 2) {
      return 1;
    }
    else {
      return recursiveFibonacci(x - 1) + recursiveFibonacci(x - 2);
    }
  }
}

int iterativeFibonacci(int x) {
  int a = 0, b = 1, c, i = 2;

  if (x == 1) {
    return a;
  }
  else {
    if (x == 2) {
      return b;
    }
    else {
      while (i < x) {
        c = a + b;
        a = b;
        b = c;

        i++;
      }

      return c;
    }
  }

}