#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "cilindro.h"

void header() {
	printf("\n-----------------------------\n");
	printf("\t--- CILINDRO ---");
	printf("\n-----------------------------\n");
}

int main(int argc, char * argv[]) {
	setlocale(LC_ALL, "Portuguese");

	Cilindro * c;
	float h, r;

	header();

	c = cilindro_cria();

	printf("\nDigite a altura do cilindro (h): ");
	scanf("%f", &h);
	printf("Digite o raio do cilindro (r): ");
	scanf("%f", &r);

	cilindro_atribui(&c, h, r);

	printf("\nAltura do cilindro: %.2fm\n", cilindro_acesso_altura(&c));
	printf("Raio do cilindro: %.2fm\n", cilindro_acesso_raio(&c));
	printf("Volume do cilindro: %.2fm³\n", cilindro_volume(&c));

	cilindro_libera(&c);

	return 0;
}

