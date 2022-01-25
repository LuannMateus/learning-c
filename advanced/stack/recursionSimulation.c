#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
  int value;
  struct Node * next;
} Node;

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