#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct Produto {
  char nome[30]; /* Nome do produto */
  int codigo; /* Codigo do produto */
  double preco; /* Preco do produto */
} Produto;

void header() {
  printf("\n----------------------------------------------------------\n");
  printf("\t--- Exercício 6 - Estoque de uma loja ---");
  printf("\n----------------------------------------------------------\n");
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  header();

  printf("\n\n == Item A e B ==\n");

  Produto products[10][10];
  Produto * dynamicProducts = (Produto *)malloc(sizeof(Produto) * 10);

  if (dynamicProducts == NULL) {
    printf("\nHouve algum problema ao alocar memória!\n");

    return 1;
  }

  for (int c = 0; c < 10; c++) {
    strcpy(products[0][c].nome, "Pe de Moleque");
    products[0][c].codigo = 13205;
    products[0][c].preco = 0.20;
  }

  for (int c = 0; c < 10; c++) {
    strcpy(products[1][c].nome, "Cocada Baiana");
    products[1][c].codigo = 15202;
    products[1][c].preco = 0.50;
  }

  printf("\nCódigo: %d\nNome: %s\nPreço: %.2f\n", products[0][0].codigo, products[0][0].nome, products[0][0].preco);
  printf("\n\nCódigo: %d\nNome: %s\nPreço: %.2f\n", products[1][0].codigo, products[1][0].nome, products[1][0].preco);

  printf("\n\n == Item C e D ==\n");

  strcpy(dynamicProducts[0].nome, "Pe de Moleque");
  dynamicProducts[0].codigo = 13205;
  dynamicProducts[0].preco = 0.20;

  strcpy(dynamicProducts[1].nome, "Cocada Baiana");
  dynamicProducts[1].codigo = 15202;
  dynamicProducts[1].preco = 0.50;

  printf("\nCódigo: %d\nNome: %s\nPreço: %.2f\n", dynamicProducts[0].codigo, dynamicProducts[0].nome, dynamicProducts[0].preco);
  printf("\n\nCódigo: %d\nNome: %s\nPreço: %.2f\n", dynamicProducts[1].codigo, dynamicProducts[1].nome, dynamicProducts[1].preco);

  free(dynamicProducts);

  return 0;
}