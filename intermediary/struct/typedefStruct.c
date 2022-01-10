#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  * typedef struct é utilizado para criar tipos de dados mais complexos.

  * Existem duas formas de criar structs.
    * Primera: typedef struct { } IDENTIFIER
    * Segundo: struct IDENTIFIER { }

  * As diferenças entre as duas está no ato da declaração, onde caso seja utilizado apenas struct,
  * será necessário na hora da declaração utilizar a palavra reservada struct antes de tipar a
  * variável.
*/

typedef struct {
  char name[100];
  int age;
  char gender;
} Person;

struct Person2 {
  char name[100];
  int age;
  char gender;
};

int main() {
  Person person;
  struct Person2 person2;

  /*
    * A função strcpy() é utilizada porque não há como atribuir uma string para um vr de 
    * forma explícita.
  */
  strcpy(person.name, "John Doe");
  person.age = 30;
  person.gender = 'M';

  printf("\nNome: %s\nIdade: %d\nSexo: %c\n", person.name, person.age, person.gender);
}