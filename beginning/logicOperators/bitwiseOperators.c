#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Operadores lógicos bit à bit -> & e |.

  * Os operadores bit à bit possuem a mesma lógica dos operadores lógicos && e ||, mas
  * diferente dos operadores && e ||, os operadores bit à bit fazem a verificação de todas as
  * condicionais, ou seja, mesma que a condicional da esquerda já seja o suficiente para passar
  * no teste lógico, ele ainda verifica a outra condição.

  * And bit à bit -> &
  * Or bit à à bit -> ||
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  short int age = 0;
  char gender;

  printf("\nDigite o seu sexo (f ou m) e sua idade: ");
  scanf("%c %hi", &gender, &age);

  if (gender == 'm' & age == 18) {
    printf("\nAlistamento obrigatório!");
  }
  else if (gender == 'f' | age == 21) {
    printf("\nAlistamento femenino obrigatório!");
  }
  else {
    printf("\nDispensado!");
  }

  return 0;
}