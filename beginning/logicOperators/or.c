#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Operador l�gico de disjun��o (OR) -> ||
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  short int age = 0;

  printf("\nDigite a sua idade: ");
  scanf("%hi", &age);

  if (age <= 5 || age >= 60) {
    printf("\nTem direito a gratuidade!");
  }
  else {
    printf("\nN�o tem direito a gratuidade!");
  }

  return 0;
}