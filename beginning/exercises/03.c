/*
4) Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
Assuma que a conta será dividida igualmente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  float expense, tip, total;
  short int numberOfPersons;

  printf("Total da despesa, gorjeta em porcentagem e total de pessoas para dividir a conta: ");
  scanf("%f%f%hi", &expense, &tip, &numberOfPersons);


  total = (expense * tip / 100 + expense) / numberOfPersons;

  printf("\nCada pessoa deve pagar: %.2f R$", total);

  return 0;
}