#include <stdio.h>
#include <stdlib.h>

// * Operador long para o tipo int
// * Esse operador aumenta a capacidade de armazenamento do tipo int
// * É possível usar o operador duas vezes seguidas, 
// * aumentando assim a capacidade de armazenamento para 8 bytes
// * Pode ser referênciado por %li ou %ld
// * Caso dois long sejam utilizados, será necessário referênciar por %lli ou %lld 

int main() {
  long int x = 1;
  long long int y = 1;

  printf("Tamanho de x: %d bytes", sizeof x);
  printf("\nTamanho de y: %d bytes", sizeof(long long));

  printf("\nTamanho de x: %ld", x);
  printf("\nTamanho de y: %lli", y);

  return 0;
}