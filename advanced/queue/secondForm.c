#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
  int value;
  struct Node * next;
} Node;

typedef struct {
  Node * first;
  Node * last;
  int size;
} Queue;

void makeQueue(Queue * queue) {
  queue->first = NULL;
  queue->last = NULL;
  queue->size = 0;
}

void insert(Queue * queue, int num) {
  Node * aux, * new = malloc(sizeof(Node));

  if (new) {
    new->value = num;
    new->next = NULL;

    if (queue->first == NULL) {
      queue->first = new;
      queue->last = new;
    }
    else {
      queue->last->next = new;
      queue->last = new;
    }

    queue->size++;
  }
  else {
    printf("\nErro ao alocar memoria.\n");
  }
}

Node * removeElement(Queue * queue) {
  Node * removedValue = NULL;

  if (queue->first) {
    removedValue = queue->first;
    queue->first = removedValue->next;
    queue->size--;
  }
  else {
    printf("\tFila vazia\n");
  }

  return removedValue;
}

void printQueue(Queue * queue) {
  Node * aux = queue->first;

  printf("\n------ BEGIN ------\n");
  while (aux) {
    printf("%d ", aux->value);
    aux = aux->next;
  }
  printf("\n------ END ------\n");
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  Queue queue;
  Node * r;
  int code, value;

  makeQueue(&queue);

  do {
    printf("\n0 - Sair\n1 - Inserir\n2 - Remover\n3 - Listar\n");
    printf("\nOpção: ");
    scanf("%d", &code);

    switch (code)
    {
    case 1:
      printf("\nValor para ser inserido na fila: ");
      scanf("%d", &value);

      insert(&queue, value);
      break;
    case 2:
      r = removeElement(&queue);

      if (r) {
        printf("\nValor removido: %d", r->value);
        free(r);
      }

      break;
    case 3:
      printQueue(&queue);
      break;
    default:
      if (code != 0) {
        printf("\nValor inválido!");

      }
      break;
    }

  } while (code != 0);
}