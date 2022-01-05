/*
5) Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo que são descontados 8% para imposto de renda.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  float dailyValue = 45.0, total = 0.0, totalWithTaxes = 0.0;
  unsigned short int workedDays = 0;

  printf("Quantidade de dias trabalhado: ");
  scanf("%hu", &workedDays);

  total = (workedDays * dailyValue);

  totalWithTaxes = total - ((total * 8) / 100);

  printf("Total a ser pago: %.2f R$", totalWithTaxes);

  return 0;
}