#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "cubo.h"

void header() {
	printf("\n-----------------------------\n");
	printf("\t--- CUBO ---");
	printf("\n-----------------------------\n");
}

int main(int argc, char * argv[]) {
	setlocale(LC_ALL, "Portuguese");

	Cubo * c;
	float a;

	header();

	c = cubo_cria();

	printf("\nDigite o valor da aresta do cubo (a): ");
	scanf("%f", &a);

	cubo_atribui(&c, a);

	printf("\nValor de cada aresta: %.2f\n", cubo_acesso(&c));
	printf("Área total do cubo: %.2fm²\n", cubo_area(&c));
	printf("Volume do cubo: %.2fm³\n", cubo_volume(&c));

	cubo_libera(&c);

	return 0;
}

