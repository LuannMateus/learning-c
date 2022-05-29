#ifndef CILINDRO
#define CILINDRO

typedef struct cilindro Cilindro;

// Aloca memória para um cilindro
Cilindro* cilindro_cria();

// Libere a memória alocada ao cilindro
void cilindro_libera(Cilindro * c);

// Retorna a altura do cilindro
float cilindro_acesso_altura(Cilindro * c);

// Retorna o raio do cilindro
float cilindro_acesso_raio(Cilindro * c);

// Atribuí altura e raio do cilindro
void cilindro_atribui(Cilindro * c, float h, float r);

// Retorna o volume do cilindro
float cilindro_volume(Cilindro * c);

#endif

