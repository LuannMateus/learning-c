#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct node {
  int value;
  struct node * next;
} Node;

typedef struct list {
  int tam;
  struct node * begin;
} List;

void createList(List * list) {
  list->begin = NULL;
  list->tam = 0;
}

void insertBeginning(List * list, int num) {
  Node * new = malloc(sizeof(Node));

  if (new) {
    new->value = num;
    new->next = list->begin;
    list->begin = new;
    list->tam++;
  }
  else {
    printf("\nErro ao alocar memoria.\n");
  }
}

void insertEnd(List * list, int num) {
  Node * aux, * new = malloc(sizeof(Node));

  if (new) {
    new->value = num;
    new->next = NULL;

    if (list->begin == NULL) {
      list->begin = new;
    }
    else {
      aux = list->begin;

      while (aux->next)
        aux = aux->next;

      aux->next = new;
    }

    list->tam++;

  }
  else {
    printf("\nErro ao alocar memoria.\n");
  }

}

void insertMiddle(List * list, int num, int element) {
  Node * aux, * new = malloc(sizeof(Node));

  if (new) {
    new->value = num;

    if (list->begin == NULL) {
      new->next = NULL;
      list->begin = new;
    }
    else {
      aux = list->begin;

      while (aux->value != element && aux->next)
        aux = aux->next;

      new->next = aux->next;
      aux->next = new;
    }

    list->tam++;
  }
  else {
    printf("\nErro ao alocar memoria.\n");
  }
}

void insertSequence(List * list, int num) {
  Node * aux, * new = malloc(sizeof(Node));

  if (new) {
    new->value = num;

    if (list->begin == NULL) {
      new->next = NULL;
      list->begin = new;
    }
    else if (new->value < list->begin->value) {
      new->next = list->begin;
      list->begin = new;
    }
    else {
      aux = list->begin;

      while (aux->next && new->value > aux->next->value)
        aux = aux->next;

      new->next = aux->next;
      aux->next = new;
    }

    list->tam++;
  }
  else {
    printf("\nErro ao alocar memoria.\n");
  }
}

void printList(List list) {
  Node * node = list.begin;

  printf("\nList tam %d: ", list.tam);
  while (node) {
    printf("%d ", node->value);
    node = node->next;
  }
  printf("\n\n");
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  int code, value, element;
  List list;

  createList(&list);

  do {
    printf("\n\t0 - Sair\n\t1 - InserirI\n\t2 - InserirF\n\t3 - InserirM\n\t4 - InserirOrdenado\n\t5 - Imprimir\n");
    printf("Code: ");
    scanf("%d", &code);

    switch (code) {
    case 1:
      printf("Digite um valor: ");
      scanf("%d", &value);

      insertBeginning(&list, value);
      break;

    case 2:
      printf("Digite um valor: ");
      scanf("%d", &value);

      insertEnd(&list, value);
      break;

    case 3:
      printf("Digite um valor e o valor de referencia: ");
      scanf("%d%d", &value, &element);

      insertMiddle(&list, value, element);
      break;

    case 4:
      printf("Digite um valor: ");
      scanf("%d", &value);

      insertSequence(&list, value);
      break;

    case 5:
      printList(list);
      break;

    default:
      if (code != 0)
        printf("Opcao invalida!\n");
    }

  } while (code != 0);


  return 0;
}