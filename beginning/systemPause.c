#include <stdio.h>
#include <stdlib.h>

int main() {
  /*
    * Não é recomendado usar o system pause já que ele só funciona no windows.
    * Para contornar isso, será necessário criar um system pause customizado.
  */
  printf("Pressiona qualquer tecla para finalizar.");
  getchar();

  return 0;
}