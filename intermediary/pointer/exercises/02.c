int main() {
  float a = 10, b = 20;

  printf("\nValor de A: %f", a);
  printf("\nValor de B: %f", b);

  change(&a, &b);

  printf("\n\nValor de A: %f", a);
  printf("\nValor de B: %f", b);
}

void change(float * a, float * b) {
  float aux;

  aux = *b;
  *b = *a;
  *a = aux;
}