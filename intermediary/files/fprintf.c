#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
  * Escrever string com fprintf()
*/

void writeFile(char filename[]);

int main() {
  setlocale(LC_ALL, "Portuguese");

  char filename[] = { "file.txt" };

  writeFile(filename);
}

void writeFile(char filename[]) {
  FILE * file;
  char name[100];
  int code, age;
  float height;

  file = fopen(filename, "w");

  if (file) {

    do {
      printf("\nDigite nome, idade e altura: ");
      scanf("%100[^\n]%d%f ", name, &age, &height);

      fprintf(file, "%s %d %.2f\n", name, age, height);

      printf("\nDigite 1 para inserir outro registro: ");
      scanf("%d", &code);
      scanf("%c");
    } while (code == 1);

    fclose(file);
  }
  else {
    printf("\nErro ao tentar abrir o arquivo!");
  }

}