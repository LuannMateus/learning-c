/*
6) Crie um programa em C que permita fazer a convers�o cambial entre Reais e D�lares. Considere
como taxa de c�mbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
D�lares.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  float conversion = 0.0, total = 0.0;

  printf("Total de reais para converter para dol�res: ");
  scanf("%f", &total);

  conversion = total / 5.30;

  printf("Total convertido de reias para dol�res: %.2f $", conversion);

  return 0;
}