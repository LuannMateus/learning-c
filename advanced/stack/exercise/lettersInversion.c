#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    3) Escreva um algoritmo para inverter a ordem das letras de cada palavra de uma string, preservando a ordem das palavras.
       Por exemplo, dado o texto: ABRA A PORTA MARIQUINHA
       A saída deve ser: ARBA A ATROP AHNIUQIRAM
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

void lettersInversion(char string[]) {
  int i = 0;
  Node * remove, * stack = NULL;

  while (string[i] != '\0') {
    if (string[i] != ' ') {
      stack = push(stack, string[i]);
    }
    else {
      while (stack) {
        remove = pop(&stack);
        printf("%c", remove->character);

        free(remove);
      }
      printf(" ");
    }

    i++;
  }

  while (stack) {
    remove = pop(&stack);
    printf("%c", remove->character);

    free(remove);
  }
  printf("\n");
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  char string[50] = { "MY ONLY LOVE SPRUNG FROM MY ONLY HATE" };

  lettersInversion(string);

  return 0;
}