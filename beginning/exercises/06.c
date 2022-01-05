/*
7) Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela a
conversão para horas, minutos e segundos.
Exemplo:
Entrada: 3672
Saída: 1:1:12
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int hours = 0, minutes = 0, seconds = 0;
  int userSeconds = 0;

  printf("Quantidade de segundos: ");
  scanf("%d", &userSeconds);

  hours = userSeconds / 3600;
  userSeconds -= hours * 3600;

  minutes = userSeconds / 60;
  userSeconds -= 60 * minutes;

  seconds = userSeconds;

  printf("\n%dh:%dm:%ds", hours, minutes, seconds);

  return 0;
}