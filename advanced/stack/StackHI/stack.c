#include <stdio.h>
#include "stack.h"

Node * push(Node * stack, int num) {
  Node * new = malloc(sizeof(Node));

  if (new) {
    new->value = num;
    new->next = stack;

    return new;
  }
  else {
    printf("\nErro ao alocar memória!\n");
  }

  return NULL;
}

Node * pop(Node ** stack) {
  Node * remove = NULL;

  if (*stack) {
    remove = *stack;
    *stack = remove->next;
  }
  else {
    printf("\nPilha vazia!\n");
  }

  return remove;
}

void printStack(Node * stack) {
  printf("\nDesempilhando a pilha: \n");

  while (stack) {
    printf("\n\t%d", stack->value);
    stack = stack->next;
  }

  printf("\n\n");
}