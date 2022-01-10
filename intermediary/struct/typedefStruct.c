#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  * typedef struct � utilizado para criar tipos de dados mais complexos.

  * Existem duas formas de criar structs.
    * Primera: typedef struct { } IDENTIFIER
    * Segundo: struct IDENTIFIER { }

  * As diferen�as entre as duas est� no ato da declara��o, onde caso seja utilizado apenas struct,
  * ser� necess�rio na hora da declara��o utilizar a palavra reservada struct antes de tipar a
  * vari�vel.
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
    * A fun��o strcpy() � utilizada porque n�o h� como atribuir uma string para um vr de 
    * forma expl�cita.
  */
  strcpy(person.name, "John Doe");
  person.age = 30;
  person.gender = 'M';

  printf("\nNome: %s\nIdade: %d\nSexo: %c\n", person.name, person.age, person.gender);
}