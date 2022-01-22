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

void write(char filename[]) {
  Contact c;
  FILE * file = fopen(filename, "ab");

  if (file) {
    printf("\nDigite o nome e a data de nascimento (dd mm aaaa): ");
    scanf("%49[^\n]%d%d%d", c.name, &c.day, &c.month, &c.year);

    fwrite(&c, sizeof(Contact), 1, file);
  }
  else {
    printf("\nErro ao abrir o arquivo!\n");
  }
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  char filename[] = { "schedule.dat" };

  write(filename);

  return 0;
}