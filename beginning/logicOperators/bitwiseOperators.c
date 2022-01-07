#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Operadores l�gicos bit � bit -> & e |.

  * Os operadores bit � bit possuem a mesma l�gica dos operadores l�gicos && e ||, mas
  * diferente dos operadores && e ||, os operadores bit � bit fazem a verifica��o de todas as
  * condicionais, ou seja, mesma que a condicional da esquerda j� seja o suficiente para passar
  * no teste l�gico, ele ainda verifica a outra condi��o.

  * And bit � bit -> &
  * Or bit � � bit -> ||
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  short int age = 0;
  char gender;

  printf("\nDigite o seu sexo (f ou m) e sua idade: ");
  scanf("%c %hi", &gender, &age);

  if (gender == 'm' & age == 18) {
    printf("\nAlistamento obrigat�rio!");
  }
  else if (gender == 'f' | age == 21) {
    printf("\nAlistamento femenino obrigat�rio!");
  }
  else {
    printf("\nDispensado!");
  }

  return 0;
}