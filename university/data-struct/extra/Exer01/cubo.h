#ifndef CUBO
#define CUBO

typedef struct cubo Cubo;

// Aloca memória para um cubo
Cubo* cubo_cria();

// Libere a memória alocada ao cubo
void cubo_libera(Cubo * c);

// Retorna o lado do cubo
float cubo_acesso(Cubo * c);

// Atribuí o lado ao cubo
void cubo_atribui(Cubo * c, float a);

// Retorna a área do cubo
float cubo_area(Cubo * c);

// Retorna o volume do cubo
float cubo_volume(Cubo * c);

#endif

