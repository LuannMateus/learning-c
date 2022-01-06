/*
6) Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
Dólares.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  float conversion = 0.0, total = 0.0;

  printf("Total de reais para converter para doláres: ");
  scanf("%f", &total);

  conversion = total / 5.30;

  printf("Total convertido de reias para doláres: %.2f $", conversion);

  return 0;
}