#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void header() {
  printf("\n----------------------------------------------------------\n");
  printf("\t--- Exercício 2 - Resetar ---");
  printf("\n----------------------------------------------------------\n");
}

char tryAgain(char code) {
  while (1)
  {
    printf("\nDeseja fazer novamente? (s/n): ");
    scanf(" %c", &code);

    if (code == 'n' || code == 'N') {
      break;
    }

    if (code == 's' || code == 'S') {
      break;
    }

    printf("\nOpção inválida. Tente novamente!\n");

    scanf("%c");
  }

  return code;
}

int reset(int * x, int * y) {
  *x = 0;
  *y = 0;

  return 0;
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  int a, b;
  int * x1, * x2;
  char code;

  x1 = &a;
  x2 = &b;

  header();

  while (1) {
    printf("\nDigite o primero valor do inteiro: ");
    scanf("%d", &a);

    printf("\nDigite o segundo valor inteiro: ");
    scanf("%d", &b);

    printf("\n== Valores originais ==\n");
    printf("\nValor 1: %d\nValor 2: %d\n", a, b);

    reset(x1, x2);

    printf("\n== Os valores foram resetados para 0 ==\n");
    printf("\nValor 1: %d\nValor 2: %d\n", a, b);

    code = tryAgain(code);

    if (code == 'n' || code == 'N') {
      break;
    }

  }

  return 0;
}