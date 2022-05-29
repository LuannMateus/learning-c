#ifndef ESFERA
#define ESFERA

typedef struct esfera Esfera;

// Aloca memória para uma esfera
Esfera * esfera_cria();

// Libere a memória alocada a esfera
void esfera_libera(Esfera * e);

// Retorna o raio da esfera
float esfera_acesso(Esfera * e);

// Atribuí o raio da esfera
void esfera_atribui(Esfera * e, float r);

// Retorna a área da esfera
float esfera_area(Esfera * e);

// Retorna o volume da esfera
float esfera_volume(Esfera * e);

#endif

