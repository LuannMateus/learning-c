#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
  * sprintf(string, condi��o com vari�vel, vari�vel);
  * snprintf(string, limite de caracteres, condi��o com vari�vel, vari�vel);
*/

int main() {
  int size = 0;
  char string1[10] = { "%" }, string2[10], name[] = { "" };

  printf("Digite o tamanho do vetor: ");
  scanf("%d[^\n]", &size);

  // sprintf(string2, "%d[^\n]", size);
  snprintf(string2, 50, "%d[^\n]", size);
  strcat(string1, string2);

  scanf("%c");
  printf("\nDigite um nome com %d caracteres: ", size);
  scanf(string1, name);

  printf("\nName: %s", name);

  return 0;
}