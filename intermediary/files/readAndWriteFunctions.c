#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  char filename[] = { "file.txt" };

  writeFile(filename);

  readFile(filename);

  return 0;
}

void writeFile(char filename[]) {
  FILE * file;
  char word;

  file = fopen(filename, "w");

  if (file) {
    printf("\nDigite um texto e pressione ENTER para finalizar!\n");
    scanf("%c", &word);

    while (word != '\n') {
      fputc(word, file);

      scanf("%c", &word);
    }

    fclose(file);
  }
  else {
    printf("\nErro ao tentar abrir o arquivo!");
  }

}

void readFile(char filename[]) {
  FILE * file;
  char word;

  file = fopen(filename, "r");

  if (file) {
    while (!feof(file)) {
      word = fgetc(file);

      printf("%c", word);
    }

    fclose(file);
  }
  else {
    printf("\nErro ao tentar abrir o arquivo!");
  }
}