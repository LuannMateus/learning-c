#include <stdio.h>
#include <stdlib.h>

int main() {

  short int result1, result2, result3, result4, count2 = 10, count1 = 10;

  // Sinônimas - Incremento
  // ++count;
  // count += 1;
  // count = count + 1;

  // Sinônimas - Decremento
  // --count;
  // count -= 1;
  // count = count - 1;

  result1 = count1++; // Pós incremento
  result2 = ++count2; // Pré incremento 
  result3 = count1--; // Pós decremento
  result4 = --count2; // Pré decremento 

  printf("\nValor: %d", result1);
  printf("\nValor: %d", result2);
  printf("\nValor: %d", result3);
  printf("\nValor: %d", result4);

  return 0;
}