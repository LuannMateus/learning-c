/*
2) Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável ?a? e um
para a variável ?b?. Em seguida, faça os passos que julgar necessário para que ao final, a variável
?a? possua o valor que inicialmente estava em ?b? e a variável ?b? possua o valor que inicialmente
estava em ?a?. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  unsigned short int a, b, aux;

  printf("Digite dois valores inteiros: ");
  scanf("%hu%hu", &a, &b);

  aux = a;
  a = b;
  b = aux;

  printf("\nValor de a: %hu\nValor de b: %hu", a, b);

  return 0;
}