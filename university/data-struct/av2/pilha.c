#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct Node {
  char character;
  struct Node * next;
} Node;

Node * push(Node * top, char character) {
  Node * new = malloc(sizeof(Node));

  if (new) {
    new->character = character;
    new->next = top;

    return new;
  }
  else {
    printf("\nErro ao alocar memória!\n");
  }

  return NULL;
}

Node * pop(Node ** top) {
  if (*top) {
    Node * remove = *top;
    *top = remove->next;

    return remove;
  }

  return NULL;
}

void inverter(Node * top) {
  char inverted_word[50][50];

  int inverted_letter_counter = 0;
  int inverted_word_counter = 0;

  while (top) {

    if (top->character == '.') {
      top = top->next;
      continue;
    };

    if (top->character != ' ') {
      inverted_word[inverted_word_counter][inverted_letter_counter] = top->character;

      inverted_letter_counter += 1;
    }
    else {
      inverted_letter_counter = 0;
      inverted_word_counter++;
    }

    top = top->next;
  }

  printf("\n");
  for (int i = inverted_word_counter; i >= 0; i--) {
    if (i == 0) {
      printf("%s", inverted_word[i]);
      continue;
    }

    printf("%s ", inverted_word[i]);
  }
  printf(".");

  printf("\n\n");
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  Node * top = NULL;

  char phrase[50];

  printf("\nDigite uma frase que termine com ponto: ");
  scanf("%49[^\n]", phrase);

  while (phrase[strlen(phrase) - 1] != '.') {
    scanf("%*c");
    printf("\nFrase inválida! Digite uma frase que termine com ponto: ");
    scanf("%49[^\n]", phrase);
  }

  for (int i = 0; phrase[i] != '\0'; i++) {
    top = push(top, phrase[i]);
  }

  inverter(top);

  // while (top) {
  //   top = top->next;

  //   Node * removedValue = pop(&top);

  //   if (removedValue) {
  //     free(removedValue);
  //   }
  // }

  return 0;
}
