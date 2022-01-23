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

typedef struct {
  Node * top;
  int tam;
} Stack;

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

void createStack(Stack * s) {
  s->top = NULL;
  s->tam = 0;
}

void push(Stack * s) {
  Node * new = malloc(sizeof(Node));

  if (new) {
    new->p = readPerson();
    new->nextNode = s->top;

    s->top = new;
    s->tam++;
  }
  else {
    printf("\nErro ao alocar memória!\n");
  }
}


Node * pop(Stack * s) {
  if (s->top) {
    Node * remove = s->top;
    s->top = s->top->nextNode;
    s->tam--;

    return remove;
  }
  else {
    printf("\nPilha vazia!\n");
  }

  return NULL;
}

Node * printStack(Stack * s) {
  Node * aux = s->top;

  printf("\n---------- INÍCIO DA PILHA ----------\n");
  while (aux) {
    Person p = aux->p;

    printPerson(p);

    aux = aux->nextNode;
  }
  printf("\n---------- FIM DA PILHA ----------\n");
}

int main() {
  setlocale(LC_ALL, "Portuguese");
  Stack stack;
  int code;
  Node * remove = NULL;

  createStack(&stack);

  do {
    printf("\n\n\n==========================================");
    printf("\n\t0 - Sair\n\t1 - Empilhar\n\t2 - Desempilhar\n\t3 - Imprimir\n");
    printf("==========================================");
    printf("\nCodigo: ");
    scanf("%d", &code);
    getchar();

    switch (code) {
    case 1:
      push(&stack);
      break;
    case 2:
      remove = pop(&stack);

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
      printStack(&stack);
      break;
    default:
      if (code != 0) {
        printf("\nCodigo invalido!\n");
      }
    }

  } while (code != 0);
}