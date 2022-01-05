#include <stdio.h>
#include <stdlib.h>


// * O operador size of retorna o tamanho em bytes de um tipo primitivo ou de uma variável
//  * Caso seja um tipo primitivo, é necessário usar os parênteses.

int main() {

  float x = 1.0;

  printf("Tamanho de um float na memoria: %d bytes", sizeof x);
  printf("Tamanho de um inteiro na memoria: %d bytes", sizeof(int));
  printf("Tamanho de um caractere na memoria: %d bytes", sizeof(char));

  return 0;
}