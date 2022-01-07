#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Vetor (Array unidimensional homogêneo) -> []
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  int num1[10];
  int num2[] = { 1, 2, 3, 4, 5 };
  int num3[5] = { 1, 2, 3 };
  int num4[5] = { 1, 2, 3, 4,5 , 6 };
  int num5[5] = { 0 };

  char words[100];
  char vowels[5] = { 'a', 'e', 'i', 'o', 'u' };

  float num6[3] = { 1.1, 2.1, 3.1 };

  // * Leitura dos valores do vetor

  for (int i = 0; i < 5; i++) {
    printf("%c", vowels[i]);
  }

  // * Adicionar valores ao vetor pelo teclado

  int elementArray[2];

  for (int i = 0; i < 2; i++) {
    printf("\nDigite o elemento da posição [%d]: ", i);
    scanf("%d", &elementArray[i]);
  }

  // * Alterando valores do vetor;

  for (int i = 0; i < 2; i++) {
    elementArray[i] = elementArray[i] * 2;
  }

  for (int i = 0; i < 2; i++) {
    printf("\n%d", elementArray[i]);
  }


  return 0;
}