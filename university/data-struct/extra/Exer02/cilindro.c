#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "cilindro.h"

typedef struct cilindro {
	float h;
	float r;
} Cilindro;

Cilindro* cilindro_cria() {
	Cilindro * c = (Cilindro*) malloc(sizeof(Cilindro));
	
	if (c == NULL) {
		printf("Houve algum problema ao tentar alocar a memória!");
		
		return NULL;
	}

	return c;
}

void cilindro_libera(Cilindro * c) {
	free(c);
}

float cilindro_acesso_altura(Cilindro * c) {
	return c->h;
}

float cilindro_acesso_raio(Cilindro * c) {
	return c->r;
}

void cilindro_atribui(Cilindro * c, float h, float r) {
	c->h = h;
	c->r = r;
}

float cilindro_volume(Cilindro * c) {
	return pow(c->r, 2) * M_PI * c->h;
}

