#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "esfera.h"

typedef struct esfera {
	float r;
} Esfera;

Esfera* esfera_cria() {
	Esfera * e = (Esfera*) malloc(sizeof(Esfera));
	
	if (e == NULL) {
		printf("Houve algum problema ao tentar alocar a memória!");
		
		return NULL;
	}

	return e;
}

void esfera_libera(Esfera * e) {
	free(e);
}

float esfera_acesso(Esfera * e) {
	return e->r;
}

void esfera_atribui(Esfera * e, float r) {
	e->r = r;
}

float esfera_area(Esfera * e) {
	return 4 * M_PI * pow(e->r, 2);
}

float esfera_volume(Esfera * e) {
	return 4 * M_PI * pow(e->r, 3) / 3;
}

