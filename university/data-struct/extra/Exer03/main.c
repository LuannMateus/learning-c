#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "esfera.h"

void header() {
  printf("\n-----------------------------\n");
  printf("\t--- ESFERA ---");
  printf("\n-----------------------------\n");
}

int main(int argc, char * argv[]) {
  setlocale(LC_ALL, "Portuguese");

  Esfera * e;
  float r;

  header();
  
  e = esfera_cria();

  printf("Digite o raio da esfera (r): ");
  scanf("%f", &r);

  esfera_atribui(&e, r);

  printf("\nRaio da esfera: %.2f\n", esfera_acesso(&e));
  printf("Área da esfera: %.2fm²\n", esfera_area(&e));
  printf("Volume da esfera: %.2fm³\n", esfera_volume(&e));

  esfera_libera(&e);

  return 0;
}
