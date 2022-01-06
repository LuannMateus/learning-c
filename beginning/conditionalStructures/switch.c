#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Estruturas condicionais - switch

  escolha (valor) {
    caso valor:
      ...
      break;
    padrão:
      ...
  }
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  unsigned short int code = 10;

  printf("===============================================");
  printf("\n 1 - Cadastrar produto\n 2 - Vender produto\n 3 - Buscar produto\n 4 - Imprimir\n 5 - Sair\n");
  printf("===============================================\n");
  printf("\nCode: ");
  scanf("%d", &code);

  switch (code) {
  case 1:
    printf("Cadastrar!");
    break;
  case 2:
    printf("Vender!");
    break;
  case 3:
    printf("Buscar!");
    break;
  case 4:
    printf("Imprimir!");
    break;
  case 5:
    printf("Sair!");
    break;
  default:
    printf("Código não existe!");
  }

  // Switch com caracteres
  char characterCode;

  printf("\n===============================================");
  printf("\n a - Cadastrar produto\n b - Vender produto\n c - Buscar produto\n d - Imprimir\n e - Sair\n");
  printf("===============================================\n");
  printf("\nCode: ");
  scanf(" %c", &characterCode);

  switch (characterCode) {
  case 'a':
  case 'A':
    printf("Cadastrar!");
    break;
  case 'b':
  case 'B':
    printf("Vender!");
    break;
  case 'c':
  case 'C':
    printf("Buscar!");
    break;
  case 'd':
  case 'D':
    printf("Imprimir!");
    break;
  case 'e':
  case 'E':
    printf("Sair!");
    break;
  default:
    printf("Código não existe!");
  }

  return 0;
}