#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*
        4) Notação pós-fixa (polonesa reversa) (calculadoras HP)
        Infixa                      Pós-fixa
        (51+13*12)                  51 13 12 * +                R = 207
        (5*(3+2)/4-6)               5 3 2 + * 4 / 6 -           R = 0,25
        (5+3+2*4-6*7*1)             5 3 + 2 4 * + 6 7 * 1 * -   R = -26
        (5*(3+(2*(4+(6*(7+1))))))   5 3 2 4 6 7 1 + * + * + *   R = 535
*/

typedef struct {
  float value;
  struct Node * next;
} Node;

Node * push(Node * stack, float num) {
  Node * new = malloc(sizeof(Node));

  if (new) {
    new->value = num;
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

float operation(float a, float b, char x) {
  switch (x) {
  case '+':
    return a + b;
    break;
  case '-':
    return a - b;
    break;
  case '*':
    return a * b;
    break;
  case '/':
    return a / b;
    break;
  default:
    return 0.0;
  }
}

float reversePolishNotation(char x[]) {
  char * pointer;
  float num;
  Node * n1, * n2, * stack = NULL;

  pointer = strtok(x, " ");

  while (pointer) {
    if (pointer[0] == '+' || pointer[0] == '-'
      || pointer[0] == '*' || pointer[0] == '/') {
      n1 = pop(&stack);
      n2 = pop(&stack);

      num = operation(n2->value, n1->value, pointer[0]);

      stack = push(stack, num);

      free(n1);
      free(n2);
    }
    else {
      num = strtol(pointer, NULL, 10);
      stack = push(stack, num);
    }

    pointer = strtok(NULL, " ");
  }

  n1 = pop(&stack);
  num = n1->value;

  free(n1);

  return num;
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  char expression[50] = { "5 3 2 + * 4 / 6 -" };

  printf("Resultado de %s: ", expression);
  printf("%f\n", reversePolishNotation(expression));

  return 0;
}