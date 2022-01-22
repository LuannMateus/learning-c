#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
  * Ler uma string com fscanf()
*/

void readFile(char filename[]);

int main() {
  setlocale(LC_ALL, "Portuguese");

  char filename[] = { "file.txt" };

  readFile(filename);
}

void readFile(char filename[]) {
  FILE * file;

  char name[100];
  int code, age;
  float height;

  file = fopen(filename, "r");

  if (file) {

    while (fscanf(file, "%s %d %f", name, &age, &height) != -1) {
      printf("\nNome: %s\nIdaed: %d\nAltura: %.2f\n", name, age, height);
    }

    fclose(file);
  }
  else {
    printf("\nErro ao tentar abrir o arquivo!");
  }

}