#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
  N�meros rand�micos entre um intervalo.

  Para fazer isso, basta usar o operador de m�lulo para um valor de limite superior,
  desse modo, os valores ir�o de 0 ao limite.

  Caso n�o queira o zero, basta somar 1 antes da fun��o rand().
*/

int main() {
  int randomNum[10];

  srand(time(NULL));

  for (int i = 0; i < 10; i++) {
    randomNum[i] = 1 + rand() % 100;
  }

  for (int i = 0; i < 10; i++) {
    printf("\t%d", randomNum[i]);
  }

  return 0;
}