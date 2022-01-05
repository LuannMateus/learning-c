#include <stdio.h>
#include <stdlib.h>

// * Operador short para o tipo int é usado quando lidamos com valor 
// * no intervalo de - 32.768 até 32 ,767.
// * Pode ser referênciado com %hi ou %d.

int main() {

  int x = 1;
  short int y = 32767;

  printf("Tamanho de um int na memoria: %d bytes", sizeof x);
  printf("\nTamanho de um short int na memoria: %hi bytes", sizeof y);

  return 0;
}