#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
  * Escrever string com fgets()
*/

void readFile(char filename[]);

int main() {
  setlocale(LC_ALL, "Portuguese");

  char filename[] = { "file.txt" };

  readFile(filename);
}

void readFile(char filename[]) {
  FILE * file;
  char text[500];

  file = fopen(filename, "r");

  if (file) {
    printf("\n\tTexto lido do arquivo\n");

    while (!feof(file)) {
      if (fgets(text, 500, file))
        printf("%s", text);
    }

    fclose(file);
  }
  else {
    printf("\nErro ao tentar abrir o arquivo!");
  }

}