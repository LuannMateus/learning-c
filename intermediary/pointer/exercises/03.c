#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int vec[] = { 1, 2, 3, 4, 5 };

  for (int i = 0; i < 5; i++) {
    printf("\nEndereço: %p\tValor: %d", vec + i, *(vec + i));
  }
}