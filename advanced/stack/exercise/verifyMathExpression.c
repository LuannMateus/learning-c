#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
        Como descobrir se uma expressão matemática está mal formada?
*/

typedef struct {
  char character;
  struct Node * next;
} Node;

Node * push(Node * stack, char value) {
  Node * new = malloc(sizeof(Node));

  if (new) {
    new->character = value;
    new->next = stack;

    return new;
  }
  else {
    printf("\n\tErro ao alocar memória\n");
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
    printf("\n\tErro ao alocar memória\n");
  }

  return remove;
}

void printStack(Node * stack) {
  printf("\t\nSTACK\n");

  while (stack) {
    printf("\t%c\n", stack->character);
    stack = stack->next;
  }

  printf("\tEND STACK\n\n");
}

int verifyPair(char close, char open) {
  switch (close) {

  case ']':
    if (open == '[') {
      return 1; // bem formada
    }
    else {
      return 0;  // mal formada
    }
    break;
  case ')':
    if (open == '(') {
      return 1;
    }
    else {
      return 0;
    }
    break;
  case '}':
    if (open == '{') {
      return 1;
    }
    else {
      return 0;
    }
    break;
  }
}


int checkMathExpression(char expression[]) {
  int i = 0;
  Node * remove, * stack = NULL;

  while (expression[i] != '\0') {
    if (expression[i] == '[' || expression[i] == '(' || expression[i] == '{') {
      stack = push(stack, expression[i]);
      printStack(stack);
    }
    else if (expression[i] == ']' || expression[i] == ')' || expression[i] == '}') {
      remove = pop(&stack);

      if (verifyPair(expression[i], remove->character) == 0) {
        printf("\tEXPRESSAO MAL FORMADA\n");
        return 1;
      }

      free(remove);
    }

    i++;
  }

  printStack(stack);

  if (stack) {
    printf("\tEXPRESSAO MAL FORMADA - AINDA RESTA ELEMENTOS\n");
    return 1;
  }
  else {
    printf("\tEXPRESSAO BEM FORMADA\n");
    return 0;
  }
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  char expression[50];

  printf("\tDigite uma expressão: ");
  scanf("%49[^\n]", expression);
  printf("\nExpressão: %s\nRetorno: %d\n",
    expression, checkMathExpression(expression));

  return 0;
}