#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "stack.h"

int factor(int num) {
  Node * remove, * stack = NULL;

  while (num > 1) {
    stack = push(stack, num);
    num--;
  }

  printStack(stack);

  while (stack) {
    remove = pop(&stack);
    num = num * remove->value;
  }

  return num;
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  int value;

  printf("\nDigite um valor maior que zero para o fatorial: ");
  scanf("%d", &value);
  printf("Fatorial de %d: %d", value, factor(value));

  return 0;
}