#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  printf("%d", stringSize("hello"));
}

int stringSize(char string[]) {

  int length = 0, position = 0;

  while (string[position++] != '\0') {
    length++;
  }

  return length;
}