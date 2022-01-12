int main() {
  int vec[] = { 21, 3, 200, 100 }, biggest, smallest;

  print(vec, 4, &biggest, &smallest);
}

void print(int * vec[], int size, int * biggest, int * smallest) {
  *biggest = *vec;
  *smallest = *vec;

  for (int i = 0; i < size; i++) {

    if (vec[i] > *biggest) {
      *biggest = *(vec + i);
    }

    if (vec[i] < *smallest) {
      *smallest = *(vec + i);
    }
  }

  printf("\nMaior valor do vetor: %d", *biggest);
  printf("\nMenor valor do vetor: %d", *smallest);
}