#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct Client {
  char name[50];
} Client;

typedef struct BookQueue {
  Client client;
  struct BookQueue * next;
} BookQueue;

typedef struct Book {
  char title[50];
  int available;
  BookQueue * client_queue;
  int clients_queue_size;
} Book;

typedef struct Library {
  Book books[50];
  Client clients[50];

  int size;
  int clients_size;
} Library;

Library create_library() {
  Library library;

  library.size = 0;
  library.clients_size = 0;

  return library;
}

Client create_client(char name[]) {
  Client client;
  strcpy(client.name, name);

  return client;
}

Book create_book(char title[50]) {
  BookQueue * queue = NULL;
  Book book;

  book.available = 1;

  strcpy(book.title, title);

  book.client_queue = queue;

  book.clients_queue_size = 0;

  return book;
}

// Library Context
void add_book(Library * library, Book book) {
  library->books[library->size] = book;
  library->size += 1;
}

void remove_book(Library * library, int index) {
  if (library->size <= 0) {
    printf("\nNenhum livro para remover\n");
    return;
  }

  if (!(library->size >= index) || index < 0) {
    printf("\nCódigo inválido\n");
    return;
  }

  for (int i = index; i < library->size - 1; i++) {
    library->books[i] = library->books[i + 1];
  }

  library->size--;
}

void add_client(Library * library, Client client) {
  library->clients[library->clients_size] = client;
  library->clients_size += 1;

  printf("\nCliente adicionado com sucesso\n");
}

void show_library(Library library) {
  printf("\n-- Library -- \n");

  if (library.size <= 0) {
    printf("\nNenhum livro na biblioteca\n");
    printf("\n-- -- -- -- -- -- \n");

    return;
  }

  for (int i = 0; i < library.size; i++) {
    printf("\n%d - %s\n", i, library.books[i].title);
  }
  printf("\n-- -- -- -- -- -- \n");
}

void show_library_clients(Library library) {
  printf("\n-- Clients -- \n");

  if (library.clients_size <= 0) {
    printf("\nNenhum cliente na biblioteca\n");
    printf("\n-- -- -- -- -- -- \n");

    return;
  }

  for (int i = 0; i < library.clients_size; i++) {
    printf("\n%d - %s\n", i, library.clients[i].name);
  }
  printf("\n-- -- -- -- -- -- \n");
}

// BookQueue Context
void insert_client(BookQueue ** bookQueue, Client client) {

  BookQueue * aux, * new_book_queue = malloc(sizeof(BookQueue));


  if (new_book_queue) {
    new_book_queue->client = client;
    new_book_queue->next = NULL;

    if (*bookQueue == NULL) {
      *bookQueue = new_book_queue;
    }
    else {
      aux = *bookQueue;

      while (aux->next) {
        aux = aux->next;
      }

      aux->next = new_book_queue;
    }
  }
  else {
    printf("\nErro ao alocar memória.\n");
  }
}

void remove_client(BookQueue ** bookQueue) {
  BookQueue * removedValue = NULL;

  if (*bookQueue) {
    removedValue = *bookQueue;
    *bookQueue = removedValue->next;

    free(removedValue);
  }
  else {
    printf("\tA file de espera está vazia\n");
  }
}

void show_book_queue(Book * book) {
  BookQueue * book_queue = book->client_queue;

  printf("\n-- Fila de espera do livro --\n");

  if (book->clients_queue_size <= 0) {
    printf("\nEsse livro não tem ninguém na fila de espera\n");
    return;
  }

  while (book_queue) {
    printf("\nNome: %s\n", book_queue->client.name);
    book_queue = book_queue->next;
  }

  printf("-- -- -- -- --\n");
}

// Library Book Context
void rent_book(Library * library, int book_index, int client_code) {
  Book book = library->books[book_index];
  Client client = library->clients[client_code];

  if (library->size == 0) {
    printf("\nNenhum livro para alugar\n");
    return;
  }

  if (!(library->size >= book_index)) {
    printf("\nCódigo inválido\n");

    return;
  }

  if (!(book.available)) {
    printf("\nO livro não está disponível\n");

    insert_client(&library->books[book_index].client_queue, client);

    library->books[book_index].clients_queue_size += 1;

    return;
  }

  library->books[book_index].available = 0;

  printf("\nLivro alugado com sucesso\n");
}

void return_book(Library * library, int book_index) {
  Book book = library->books[book_index];

  if (!(library->size >= book_index)) {
    printf("Invalid index\n");
    return;
  }

  if (!(book.available)) {
    library->books[book_index].available = 1;

    remove_client(&library->books[book_index].client_queue);

    printf("\nLivro devolvido\n");
  }
  else {
    printf("\nO livro não foi alugado\n");
  }
}

// Menu Context
int menu() {
  printf("\n-- Livraria --\n");
  printf("\n1 - Adicionar um livro\n");
  printf("2 - Remover um livro\n");
  printf("3 - Alugar um livro\n");
  printf("4 - Devolver um livro\n");
  printf("5 - Ver todos os livros\n");
  printf("6 - Olhar a fila de espera de um livro\n");
  printf("7 - Cadastrar um cliente\n");
  printf("8 - Ver todos os clientes cadastrados\n");
  printf("0 - Sair\n");
  printf("\n-- -- -- -- --\n");
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  int code;

  Library library = create_library();

  Client client1 = create_client("John Doe");
  Client client2 = create_client("Mary Doe");

  while (1) {
    menu();

    printf("Código: ");
    scanf("%d", &code);
    fgetc(stdin);

    if (code == 0) {
      printf("\nSaindo...\n");
      break;
    }

    switch (code) {
    case 1:
      char title[50];

      printf("\nTítulo: ");
      fgets(title, 50, stdin);

      Book book = create_book(title);

      add_book(&library, book);
      break;
    case 2:
      int book_index;

      show_library(library);

      if (library.size <= 0) {
        printf("\nNenhum livro para remover\n");
        break;
      }


      printf("\nCódigo do livro: ");
      scanf("%d", &book_index);

      remove_book(&library, book_index);
      break;
    case 3:
      int book_code;
      int client_code;

      show_library_clients(library);

      if (library.clients_size <= 0) {
        printf("\nNenhum cliente cadastrado\n");
        break;
      }

      printf("\nQual cliente vai alugar o livro: ");
      scanf(" %d", &client_code);

      show_library(library);

      if (library.size <= 0) {
        printf("\nNenhum livro para alugar\n");
        break;
      }

      printf("\nQual livro você deseja alugar: ");
      scanf(" %d", &book_code);


      rent_book(&library, book_code, client_code);

      break;

    case 4:
      int book_code_return;

      show_library(library);

      if (library.size <= 0) {
        printf("\nNenhum livro para devolver\n");
        break;
      }

      printf("\nQual livro você deseja devolver: ");
      scanf(" %d", &book_code_return);

      return_book(&library, book_code_return);

      break;
    case 5:
      show_library(library);
      break;
    case 6:
      int book_code_queue;


      show_library(library);

      if (library.size <= 0) {
        printf("\nNenhum livro para ver a fila de espera\n");
        break;
      }

      printf("\nQual livro você deseja ver a fila de espera: ");
      scanf(" %d", &book_code_queue);

      show_book_queue(&library.books[book_code_queue]);

      break;
    case 7:
      char name[50];

      printf("\nNome: ");
      fgets(name, 50, stdin);

      Client client = create_client(name);

      add_client(&library, client);

      break;
    case 8:
      show_library_clients(library);
      break;
    default:
      printf("\n-- -- -- -- --\n");
      printf("\nCódigo inválido\n");
      printf("\n-- -- -- -- --\n");
    }
  }

  return 0;
}