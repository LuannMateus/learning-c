#include <stdio.h>
#include <stdlib.h>

/*
  * Operador unsigned
  * Esse operador retira a possiblidade de valores negativos, dobrando assim o poder de armazenamento
  * Limite para o tipo int é dobrado.

  * unsigned int -> Trocar o %d por %u
  * unsigned short int -> %hu ou %d
  * unsigned long int -> %lu
*/

int main() {
  unsigned int x = 2222222222;

  unsigned short int y = 55000;

  unsigned long int z = 2222222222;

  printf("\n%u", x);
  printf("\n%hu", y);
  printf("\n%lu", z);

  return 0;
}