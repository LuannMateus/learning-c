/*
  * Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. O monge, necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito com grãos de trigo dispostos em um tabuleiro de xadrez (que possui 64 casas), de tal forma que o primeiro quadro deveria conter apenas um grão e os quadros subsequentes, o dobro do quadro anterior. Crie um programa para calcular o total de grãos de trigo que o monge recebeu.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  long double grains = 1;

  for (int i = 0; i < 64; i++) {
    grains *= 2;
  }

  __mingw_printf("Total: %.0Lf grãos", grains);

  return 0;
}