#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void header() {
  printf("\n----------------------------------------------------------\n");
  printf("\t--- Exercício 3 - Trocar Strings ---");
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

int swapString(char * str1[], char * str2[]) {
  char * aux = malloc(sizeof(char) * strlen(str1) + 1);

  if (aux == NULL) {
    printf("Erro ao alocar memória.\n");

    return 1;
  }

  strcpy(aux, str1);
  strcpy(str1, str2);
  strcpy(str2, aux);

  free(aux);

  return 0;
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  int TOTAL_CHARACTERE = 20;
  char * str1[TOTAL_CHARACTERE], * str2[TOTAL_CHARACTERE], code;

  header();

  while (1)
  {
    printf("\nDigite o valor da primeira string (20 caracteres máximo): ");
    fgets(str1, TOTAL_CHARACTERE, stdin);

    printf("\nDigite o valor da segunda string (20 caracteres máximo): ");
    fgets(str2, TOTAL_CHARACTERE, stdin);

    printf("\n\n=== Antes da troca ===\n\n");

    printf("\nString 1: %s\nString 2: %s", str1, str2);

    swapString(str1, str2);

    printf("\n\n=== Depois da troca ===\n\n");

    printf("\nString 1: %s\nString 2: %s", str1, str2);

    code = tryAgain(code);

    if (code == 'n' || code == 'N') {
      break;
    }
  }

  return 0;
}