#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
  int day, month, year;
} Birthdate;

typedef struct {
  char name[100];
  int age;
  char gender;
  Birthdate birthdate;
} Person;

Person createPerson();
void printPerson(Person person);

int main() {
  setlocale(LC_ALL, "Portuguese");

  const PERSON_ARRRAY_SIZE = 2;
  Person person[PERSON_ARRRAY_SIZE][PERSON_ARRRAY_SIZE];

  person[0][0] = createPerson();

  printPerson(person[0][0]);
}

Person createPerson() {
  Person person;

  printf("\nDigite o seu nome: ");
  scanf("%100[^\n]", person.name);

  for (int i = 0; person.name[i] != '\0'; i++) {
    if (person.name[i] == '\n') {
      person.name[i] = '\0';
    }
  }

  printf("\nDigite a sua idade: ");
  scanf(" %d", &person.age);

  printf("\nDigite o seu sexo (M ou F): ");
  scanf(" %c", &person.gender);

  printf("\nDigite a sua data de nascimento (dia, mês e ano): ");
  scanf("%d%d%d", &person.birthdate.day, &person.birthdate.month, &person.birthdate.year);
  scanf("%c");

  return person;
}

void printPerson(Person person) {

  printf("\nNome: %s\nIdade: %d\nSexo: %c", person.name, person.age, person.gender);
  printf("\nData de nascimento: %d/%d/%d\n",
    person.birthdate.day, person.birthdate.month, person.birthdate.year);
}