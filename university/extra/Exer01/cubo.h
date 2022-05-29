#ifndef CUBO
#define CUBO

typedef struct cubo Cubo;

// Aloca mem�ria para um cubo
Cubo* cubo_cria();

// Libere a mem�ria alocada ao cubo
void cubo_libera(Cubo * c);

// Retorna o lado do cubo
float cubo_acesso(Cubo * c);

// Atribu� o lado ao cubo
void cubo_atribui(Cubo * c, float a);

// Retorna a �rea do cubo
float cubo_area(Cubo * c);

// Retorna o volume do cubo
float cubo_volume(Cubo * c);

#endif

