#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
  * Escrever string com fputs()
*/

void writeFile(char filename[]);

int main() {
  setlocale(LC_ALL, "Portuguese");

  char filename[] = { "file.txt" };

  writeFile(filename);
}

void writeFile(char filename[]) {
  FILE * file;
  char text[500];

  file = fopen(filename, "w");

  if (file) {
    printf("\nDigite uma frase ou pressione 1 caracter para finalizar!\n");
    fgets(text, 500, stdin);

    while (strlen(text) > 2) {
      fputs(text, file);
      fgets(text, 500, stdin);
    }

    fclose(file);
  }
  else {
    printf("\nErro ao tentar abrir o arquivo!");
  }

}