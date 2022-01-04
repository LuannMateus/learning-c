#include <stdio.h>
#include <stdlib.h>

int main() {
  int value1;
  float value2;
  char gender = "";

  printf("Digite um valor inteiro: ");
  scanf("%d", &value1);

  printf("Digite um segundo valor decimal: ");
  scanf("%f", &value2);

  printf("Digite seu sexo (f, F, m ou M): ");
  scanf(" %c", &gender);

  printf("\nPrimeiro valor: %d \nSegundo valor: %.2f \nTerceiro valor: %c", value1, value2, gender);

  // * Múltiplos valores.
  int num1, num2, num3;

  printf("\nDigite 3 valores: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  printf("\nValor 1: %d\nValor 2: %d\nValor 3: %d", num1, num2, num3);

  /*
    ? Problema

      * Problema de leitura de caracatere com scaf.
      * Qualquer ação do teclado pode ser considerado um caractere, seja um espaço ou quebra de linha.
      * Com isso em mente, quando lemos um caractere, enter ou espaço podem atrapalhar a leitura.

    ? Solução

      * Para resolver isso, basta coloca um espaço no scanf, para ignorar espaços e qu  
  */
  char word;

  printf("\nDigite um caractere: ");
  scanf(" %c", &word);

  return 0;
}