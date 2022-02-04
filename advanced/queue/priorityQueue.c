#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct no {
  int value;
  struct no * next;
} Node;

void insert(Node ** queue, int num) {
  Node * aux, * new = malloc(sizeof(Node));

  if (new) {
    new->value = num;
    new->next = NULL;

    if (*queue == NULL) {
      *queue = new;
    }
    else {
      aux = *queue;

      while (aux->next) {
        aux = aux->next;
      }

      aux->next = new;
    }
  }
  else {
    printf("\nErro ao alocar memoria.\n");
  }
}

void priorityInsert(Node ** queue, int num) {
  Node * aux, * new = malloc(sizeof(Node));

  if (new) {
    new->value = num;
    new->next = NULL;

    if (*queue == NULL) {
      *queue = new;
    }
    else {
      if (num > 59) {
        if ((*queue)->value < 60) {
          new->next = *queue;
          *queue = new;
        }
        else {
          aux = *queue;

          while (aux->next && aux->next->value > 59)
            aux = aux->next;

          new->next = aux->next;
          aux->next = new;
        }
      }
      else {
        aux = *queue;

        while (aux->next) {
          aux = aux->next;
        }

        aux->next = new;
      }
    }

  }
  else {
    printf("\nErro ao alocar memoria.\n");
  }
}

Node * removeElement(Node ** queue) {
  Node * removedValue = NULL;

  if (*queue) {
    removedValue = *queue;
    *queue = removedValue->next;
  }
  else {
    printf("\tFila vazia\n");
  }

  return removedValue;
}

void printQueue(Node * queue) {
  printf("\n------ BEGIN ------\n");
  while (queue) {
    printf("%d ", queue->value);
    queue = queue->next;
  }
  printf("\n------ END ------\n");
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  Node * queue = NULL, * r;
  int code, value;

  do {
    printf("\n0 - Sair\n1 - Inserir\n2 - Remover\n3 - Listar\n4 - Inserir com prioridade\n");
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
      printQueue(queue);
      break;
    case 4:
      printf("\nValor para ser inserido na fila: ");
      scanf("%d", &value);

      priorityInsert(&queue, value);
      break;
    default:
      if (code != 0) {
        printf("\nValor inválido!");
      }

      break;
    }

  } while (code != 0);
}