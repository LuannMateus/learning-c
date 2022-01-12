#include <locale.h>

int strcpy(char * destiny, char * origin) {
  int i = 0;

  while (*(origin + i) != '\0') {
    *(destiny + i) = *(origin + i);
    i++;
  }
  *(destiny + i) = '\0';

  return i;
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  char destiny[25], origin[25] = { "Hello World!" };
  int length;

  length = strcpy(destiny, origin);

  printf("\nValor: %s\nTamanho: %d", destiny, length);
}