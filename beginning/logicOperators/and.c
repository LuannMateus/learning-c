#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Operador l�gico de conjun��o (AND) -> &&
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  short int age = 0;
  char gender;

  printf("\nDigite o seu sexo (f ou m) e sua idade: ");
  scanf("%c %hi", &gender, &age);

  if (gender == 'm' && age == 18) {

    printf("\nAlistamento obrigat�rio!");
  }
  else {
    printf("\nDispensado!");
  }

  return 0;
}