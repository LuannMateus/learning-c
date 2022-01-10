#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void recursiveFibonacci(int count, int position, int ant, int post, int aux);

int recursiveFibonacciOfProfessorSolution(int n);

int main() {
  setlocale(LC_ALL, "Portuguese");

  int count = 0, position = 0, ant = 0, post = 1, aux = 0;

  // printf("0 ");

  // recursiveFibonacci(count, position, ant, post, aux);

  printf("\nDigite qual posição do fibonacci você quer: ");
  scanf("%d", &position);

  printf("\nValor: %d", recursiveFibonacciOfProfessorSolution(position));

  return 0;
}

void recursiveFibonacci(int count, int position, int ant, int post, int aux) {

  if (count == position) {
    return;
  }
  else {
    printf("%d ", post);

    aux = ant + post;
    ant = post;
    post = aux;

    recursiveFibonacci(++count, position, ant, post, aux);
  }
}

int recursiveFibonacciOfProfessorSolution(int n) {

  if (n == 1) {
    return 0;
  }
  else {
    if (n == 2) {
      return 1;
    }
    else {
      return recursiveFibonacciOfProfessorSolution(n - 1) + recursiveFibonacciOfProfessorSolution(n - 2);
    }
  }
}