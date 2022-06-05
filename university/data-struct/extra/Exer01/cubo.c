#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "cubo.h"

typedef struct cubo {
	float a;
} Cubo;

Cubo* cubo_cria() {
	Cubo * c = (Cubo*) malloc(sizeof(Cubo));
	
	if (c == NULL) {
		printf("Houve algum problema ao tentar alocar a memória!");
		
		return NULL;
	}

	return c;
}

void cubo_libera(Cubo * c) {
	free(c);
}

float cubo_acesso(Cubo * c) {
	return c->a;
}

void cubo_atribui(Cubo * c, float a) {
	c->a = a;
}

float cubo_area(Cubo * c) {
	return 6 * (pow(c->a, 2));
}

float cubo_volume(Cubo * c) {
	return pow(c->a, 3);
}

