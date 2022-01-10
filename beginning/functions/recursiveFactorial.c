#include <stdio.h>
#include <stdlib.h>


void recursiveFactorial(int x, int cc);
int recursiveFactorialOfProfessorSolution(int x);

int main() {
  int x = 10, acc = 1;

  // recursiveFactorial(x, acc);

  printf("Fatoria de %d: %d\n", x, recursiveFactorialOfProfessorSolution(x));

  return 0;
}

void recursiveFactorial(int x, int acc) {
  if (x == 0 || x == 1) {
    printf("%d! = %d", x, acc);
  }
  else {
    acc *= x;
    printf("%d x ", x);
    recursiveFactorial(x - 1, acc);
  }
}


int recursiveFactorialOfProfessorSolution(int x) {
  if (x == 0 || x == 1) {
    return 1;
  }
  else {
    return  x * recursiveFactorialOfProfessorSolution(x - 1);
  }
}