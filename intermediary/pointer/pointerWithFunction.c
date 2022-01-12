#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int num = 40;

  print(&num);

  printf("\n%d", num);
}

void print(int * num) {

  printf("\n%d", *num);

  *num = 80;
}