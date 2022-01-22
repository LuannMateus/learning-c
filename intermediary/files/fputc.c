#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Escrever em um arquivo com fputc()

  * Modos de abertura de arquivos:

    * w -> Escrita.
    * r -> Leitura.
    * a -> Anexar.
    * r+ -> Leitura e escrita.
    * w+ -> Leitura e escrita (apaga o conteúdo caso o arquivo já exista).
    * a+ -> Leitura e escrita (adiciona ao final do arquivo).

*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  FILE * file;
  char word;

  file = fopen("file.txt", "w");

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

  return 0;
}