#include <stdio.h>
#include <stdlib.h>

int main() {
  char gender;
  int age;
  float weight, hight;

  printf("Digite sexo (f, F, m ou M), idade, peso e altura: ");
  scanf("%c %d %f %f", &gender, &age, &weight, &hight);

  printf("Sexo: %c - Idade: %d - Peso: %.1f - Altura: %.2f", gender, age, weight, hight);

  return 0;
}