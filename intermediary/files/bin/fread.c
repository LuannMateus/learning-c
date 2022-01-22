#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    * Modos de abertura de arquivos binários em C:

    * wb -> Escrita
    * rb -> leitura
    * ab -> anexar
    * rb+ -> leitura e escrita
    * wb+ -> leitura e escrita (apaga o conteúdo caso o arquivo exista)
    * ab+ -> leitura e escrita (adiciona ao final do arquivo)
*/

typedef struct {
  char name[50];
  int day, month, year;
} Contact;

void read(char filename[]) {
  Contact c;
  FILE * file = fopen(filename, "rb");

  if (file) {
    while (!feof(file)) {
      if (fread(&c, sizeof(Contact), 1, file)) {
        printf("\nNome: %s\nData: %d/%d/%d\n", c.name, c.day, c.month, c.year);
      }
    }
  }
  else {
    printf("\nErro ao abrir o arquivo!\n");
  }

}

int main() {
  setlocale(LC_ALL, "Portuguese");

  char fileName[] = { "schedule.dat" };

  read(fileName);

  return 0;
}