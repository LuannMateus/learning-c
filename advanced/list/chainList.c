#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct node {
  int value;
  struct node * next;
} Node;

void insertBeginning(Node ** list, int num) {
  Node * new = malloc(sizeof(Node));

  if (new) {
    new->value = num;
    new->next = *list;
    *list = new;
  }
  else {
    printf("\nErro ao alocar memoria.\n");
  }
}

void insertEnd(Node ** list, int num) {
  Node * aux, * new = malloc(sizeof(Node));

  if (new) {
    new->value = num;
    new->next = NULL;

    if (*list == NULL) {
      *list = new;
    }
    else {
      aux = *list;

      while (aux->next)
        aux = aux->next;

      aux->next = new;
    }

  }
  else {
    printf("\nErro ao alocar memoria.\n");
  }

}

void insertMiddle(Node ** list, int num, int before) {
  Node * aux, * new = malloc(sizeof(Node));

  if (new) {
    new->value = num;

    if (*list == NULL) {
      new->next = NULL;
      *list = new;
    }
    else {
      printf("%d", before);
      aux = *list;

      while (aux->value != before && aux->next)
        aux = aux->next;

      new->next = aux->next;
      aux->next = new;
    }

  }
  else {
    printf("\nErro ao alocar memoria.\n");
  }
}

void printList(Node * list) {
  printf("\nList: ");
  while (list) {
    printf("%d ", list->value);
    list = list->next;
  }
  printf("\n\n");
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  int code, value, before;
  Node * list = NULL;

  do {
    printf("\n\t0 - Sair\n\t1 - InserirI\n\t2 - inserirF\n\t3 - InserirM\n\t4 - Imprimir\n");
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
      scanf("%d%d", &value, &before);

      insertMiddle(&list, value, before);
      break;

    case 4:
      printList(list);
      break;

    default:
      if (code != 0)
        printf("Opcao invalida!\n");
    }

  } while (code != 0);


  return 0;
}