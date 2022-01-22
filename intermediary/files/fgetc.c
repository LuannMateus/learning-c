#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  * Ler um arquivo com fgetc()
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  FILE * file;
  char word;

  file = fopen("file.txt", "w+");

  if (file) {

    printf("\nDigite um texto e pressione ENTER para finalizar!\n");
    scanf("%c", &word);

    while (word != '\n') {
      fputc(word, file);

      scanf("%c", &word);
    }

    // * Fun��o para resetar o ponteiro file para a posi��o inicial.
    rewind(file);

    printf("\nConte�do lido: ");
    // * Fun��o feof (f end of file)retorna um 1 caso seja o fim do arquivo.
    while (!feof(file)) {
      word = fgetc(file);

      printf("%c", word);
    }

    fclose(file);
  }
  else {
    printf("\nErro ao tentar abrir o arquivo!");
  }

  return 0;
}