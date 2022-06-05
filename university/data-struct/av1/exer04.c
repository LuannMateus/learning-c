#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void header() {
  printf("\n----------------------------------------------------------\n");
  printf("\t--- Exercício 4 - Fibonacci ---");
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
      scanf("%c");
      break;
    }

    printf("\nOpção inválida. Tente novamente!\n");

    scanf("%c");
  }

  return code;
}

int fibonacci(int before, int after, int result, int position) {
  if (position == 1) {
    printf("\n1");
    result = 1;
  }
  else if (position == 2) {
    printf("\n1 1");
    result = 1;
  }

  for (int i = 0; i < position - 2; i++) {

    if (position == 1 || position == 2) {
      break;
    }
    else if (i == 0) {
      printf("\n1 1 ");
    }

    result = before + after;
    before = after;
    after = result;

    printf("%d ", result);
  }

  printf("\n");
  printf("\nO elemento da posição %d: %d\n", position, result);
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  int before = 1, after = 1, position, result;
  char code;

  header();

  while (1) {

    while (1) {
      printf("\nDigite qual posição do fibonacci você quer: ");
      scanf("%d", &position);

      if (position <= 0) {
        printf("\nPosição inválida. Tente novamente!\n");
      }
      else {
        break;
      }
    }

    fibonacci(before, after, result, position);

    code = tryAgain(code);

    if (code == 'n' || code == 'N') {
      break;
    }

    before = 1;
    after = 1;
    result = 0;
  }

  return 0;
}