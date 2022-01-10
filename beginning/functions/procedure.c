#include <stdio.h>
#include <stdlib.h>

int main() {
  print("Hello World!");

  return 0;
}

void print(char string[]) {
  for (int i = 0; string[i] != '\0'; i++) {
    printf("%c", string[i]);
  }
}