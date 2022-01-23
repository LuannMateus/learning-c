#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
  int day, month, year;
} Date;

typedef struct {
  char name[50];
  Date date;
} Person;

typedef struct {
  Person p;
  struct Node * nextNode;
} Node;

void printPerson(Person p) {
  printf("\nNome: %s\nData: %d/%d/%d\n",
    p.name, p.date.day, p.date.month, p.date.year);
}

Person readPerson() {
  Person p;

  printf("\nDigite o nome e data de nascimento (dd mm aaaa): ");
  scanf("%49[^\n]%d%d%d", p.name, &p.date.day, &p.date.month, &p.date.year);

  return p;
}

Node * push(Node * top) {
  Node * new = malloc(sizeof(Node));

  if (new) {
    new->p = readPerson();
    new->nextNode = top;

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
    *top = remove->nextNode;

    return remove;
  }
  else {
    printf("\nPilha vazia!\n");
  }

  return NULL;
}

Node * printStack(Node * top) {
  printf("\n---------- INÍCIO DA PILHA ----------\n");
  while (top) {
    Person p = top->p;

    printPerson(p);

    top = top->nextNode;
  }
  printf("\n---------- FIM DA PILHA ----------\n");
}

int main() {
  setlocale(LC_ALL, "Portuguese");
  Person p;
  int code;
  Node * top = NULL, * remove;

  do {
    printf("\n\n\n==========================================");
    printf("\n\t0 - Sair\n\t1 - Empilhar\n\t2 - Desempilhar\n\t3 - Imprimir\n");
    printf("==========================================");
    printf("\nCodigo: ");
    scanf("%d", &code);
    getchar();

    switch (code) {
    case 1:
      top = push(top);
      break;
    case 2:
      remove = pop(&top);

      if (remove) {
        printf("\n\nElemento removido com sucesso!\n");
        printPerson(remove->p);

        free(remove);
      }
      else {
        printf("\nSem nó para remover!\n");
      }
      break;
    case 3:
      printStack(top);
      break;
    default:
      if (code != 0) {
        printf("\nCodigo invalido!\n");
      }
    }

  } while (code != 0);
}