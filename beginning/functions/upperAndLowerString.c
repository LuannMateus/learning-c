#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
  char phrase[20] = { "Hello World!" };

  toUpperCase(phrase);

  printf("\n%s", phrase);

  toLowerCase(phrase);

  printf("\n%s", phrase);
}

void toUpperCase(char string[]) {
  for (int i = 0; string[i] != '\0'; i++) {
    string[i] = toupper(string[i]);
  }
}

void toLowerCase(char string[]) {
  for (int i = 0; string[i] != '\0'; i++) {
    string[i] = tolower(string[i]);
  }
}