#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char name[100];
  int age;
  char gender;
} Person;

int main() {
  Person person;

  printf("\nDigite o seu nome: ");
  fgets(person.name, 100, stdin);

  for (int i = 0; person.name[i] != '\0'; i++) {
    if (person.name[i] == '\n') {
      person.name[i] = '\0';
    }
  }

  printf("\nDigite a sua idade: ");
  scanf("%d", &person.age);

  printf("\nDigite o seu sexo (M ou F): ");
  scanf(" %c", &person.gender);

  printf("\nNome: %s\nIdade: %d\nSexo: %c\n", person.name, person.age, person.gender);
}