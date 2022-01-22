#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  Apagando um arquivo com a função remove(filename).
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  char filename[] = { "schedule.txt" };

  FILE * file = fopen(filename, "r");

  if (file) {
    fclose(file);

    remove(filename);
  }
  else {
    printf("\nNÃO FOI POSSÍVEL ABRIR O ARQUIVO!\n");
  }

  return 0;
}

