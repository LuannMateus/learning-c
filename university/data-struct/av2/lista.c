#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

typedef struct Data {
  int day;
  int month;
} Data;

typedef struct Contact {
  char name[40];
  char telephone[15];
  char cellphone[15];
  char email[40];
  Data birthday;
} Contact;

typedef struct SchedulePhone {
  Contact contact;
  struct SchedulePhone * next;
} SchedulePhone;

SchedulePhone * create_schedule() {
  SchedulePhone * schedulePhone = malloc(sizeof(SchedulePhone));

  schedulePhone->contact = (Contact){
    .name = "My",
    .telephone = "33225544",
    .cellphone = "85999999999",
    .email = "myEmail@mail.com",
    .birthday = (Data) {
      .day = 2,
      .month = 12
    }
  };
  schedulePhone->next = NULL;

  return schedulePhone;
}

Contact create_contact() {
  Contact contact;

  char name[40];
  char telephone[15];
  char cellphone[15];
  char email[40];
  Data birthday;

  printf("\n-- Criando Contato --\n");

  printf("\nName: ");
  scanf("%39[^\n]", name);
  getchar();

  printf("Telephone: ");
  scanf("%14[^\n]", telephone);
  getchar();

  printf("Cellphone: ");
  scanf("%14[^\n]", cellphone);
  getchar();

  printf("Email: ");
  scanf("%14[^\n]", email);
  getchar();

  printf("Birthday: ");
  scanf("%d/%d", &birthday.day, &birthday.month);

  printf("\n-- -- -- -- -- -- --\n");

  strcpy(contact.name, name);
  strcpy(contact.telephone, telephone);
  strcpy(contact.cellphone, cellphone);
  strcpy(contact.email, email);
  contact.birthday = birthday;

  return contact;
}

int transform_letter_to_number(char letter) {
  switch (toupper(letter)) {
  case 'A':
    return 1;
  case 'B':
    return 2;
  case 'C':
    return 3;
  case 'D':
    return 4;
  case 'E':
    return 5;
  case 'F':
    return 6;
  case 'G':
    return 7;
  case 'H':
    return 8;
  case 'I':
    return 9;
  case 'J':
    return 10;
  case 'K':
    return 11;
  case 'L':
    return 12;
  case 'M':
    return 13;
  case 'N':
    return 14;
  case 'O':
    return 15;
  case 'P':
    return 16;
  case 'Q':
    return 17;
  case 'R':
    return 18;
  case 'S':
    return 19;
  case 'T':
    return 20;
  case 'U':
    return 21;
  case 'V':
    return 22;
  case 'W':
    return 23;
  case 'X':
    return 24;
  case 'Y':
    return 25;
  case 'Z':
    return 26;
  default:
    return -1;
  }
}

Contact * insert_contact(SchedulePhone ** schedulePhone, Contact contact) {
  SchedulePhone * aux, * new = malloc(sizeof(SchedulePhone));

  if (new) {
    new->contact = contact;

    if (*schedulePhone == NULL) {
      new->next = NULL;
      *schedulePhone = new;
    }
    else if (transform_letter_to_number(contact.name[0]) < transform_letter_to_number((*schedulePhone)->contact.name[0])) {
      new->next = *schedulePhone;
      *schedulePhone = new;
    }
    else {
      aux = *schedulePhone;

      while (aux->next && transform_letter_to_number(contact.name[0]) > transform_letter_to_number(aux->next->contact.name[0])) {
        aux = aux->next;
      }

      new->next = aux->next;
      aux->next = new;
    }

    return &new->contact;
  }
  else {
    printf("\nErro ao alocar memória!\n");
  }

  return NULL;
}

Contact * search_contact(SchedulePhone * schedulePhone, char name[]) {
  while (schedulePhone) {
    if (strcmp(schedulePhone->contact.name, name) == 0) {
      return &schedulePhone->contact;
    }

    schedulePhone = schedulePhone->next;
  }

  return NULL;
}

SchedulePhone * remove_contact(SchedulePhone ** schedulePhone, char name[40]) {
  SchedulePhone * aux, * remove = NULL;

  if (*schedulePhone) {
    if (strcmp((*schedulePhone)->contact.name, name) == 0) {
      remove = *schedulePhone;
      *schedulePhone = remove->next;

      return remove;
    }
    else {
      aux = *schedulePhone;

      while (aux->next && strcmp(aux->next->contact.name, name) != 0)
        aux = aux->next;

      if (aux->next) {
        remove = aux->next;
        aux->next = remove->next;

        return remove;
      }
    }
  }

  return NULL;
}

int update_contact(SchedulePhone ** schedulePhone, char name[40], Contact contact) {
  SchedulePhone * removed_contact = remove_contact(schedulePhone, name);

  if (removed_contact) {
    insert_contact(schedulePhone, contact);

    free(removed_contact);

    return 0;
  }


  return 1;
}

void show_all_contacts(SchedulePhone * schedulePhone) {
  while (schedulePhone) {

    printf("\nNome: %s", schedulePhone->contact.name);
    printf("\nTelefone: %s", schedulePhone->contact.telephone);
    printf("\nCelular: %s", schedulePhone->contact.cellphone);
    printf("\nEmail: %s", schedulePhone->contact.email);
    printf("\nAniversário: %d/%d", schedulePhone->contact.birthday.day, schedulePhone->contact.birthday.month);

    printf("\n -- \n");

    schedulePhone = schedulePhone->next;
  }
}

void remove_duplicate_contacts(SchedulePhone ** schedulePhone) {
  SchedulePhone * aux, * remove;

  if (*schedulePhone) {
    aux = *schedulePhone;

    while (aux->next) {
      if (strcmp(aux->contact.name, aux->next->contact.name) == 0) {
        remove = aux->next;
        aux->next = remove->next;

        free(remove);
      }
      else {
        aux = aux->next;
      }
    }
  }
}

void free_schedule_phone(SchedulePhone ** schedulePhone) {
  SchedulePhone * aux = *schedulePhone, * remove = NULL;

  while (*schedulePhone)
  {
    free(aux);

    *schedulePhone = (*schedulePhone)->next;
    aux = *schedulePhone;
  }
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  int code;
  SchedulePhone * schedulePhone = create_schedule();

  while (1) {
    printf("\n-- Agenda Telefónica --\n");
    printf("\n1 - Inserir Contato\n");
    printf("2 - Buscar Contato\n");
    printf("3 - Remover Contato\n");
    printf("4 - Atualizar Contato\n");
    printf("5 - Listar Contatos\n");
    printf("6 - Remover Contatos Duplicados\n");
    printf("7 - Apagar agenda e sair\n");
    printf("0 - Sair\n");
    printf("\n-- -- -- -- -- -- --\n");
    printf("Digite o código: ");
    scanf("%d", &code);
    scanf("%*c");

    if (code == 0) {
      printf("\nSaindo...\n\n");
      break;
    }
    else if (code == 7) {
      free_schedule_phone(&schedulePhone);

      printf("\nSaindo...\n\n");
      break;
    }

    switch (code) {
    case 1:
      Contact new_contact = create_contact();

      Contact * inserted_contact = insert_contact(&schedulePhone, new_contact);

      if (inserted_contact) {
        printf("\nContato inserido com sucesso!\n");
      }
      else {
        printf("\nErro ao inserir contato!\n");
      }

      break;
    case 2:
      char searched_name_contact[40];

      printf("\nDigite o nome do contato que deseja buscar: ");
      scanf("%40[^\n]", searched_name_contact);

      Contact * contact_searched = search_contact(schedulePhone, searched_name_contact);

      if (contact_searched) {
        printf("\nContato encontrado!\n");
        printf("\nNome: %s", contact_searched->name);
        printf("\nTelefone: %s", contact_searched->telephone);
        printf("\nCelular: %s", contact_searched->cellphone);
        printf("\nEmail: %s", contact_searched->email);
        printf("\nAniversário: %d/%d\n\n", contact_searched->birthday.day, contact_searched->birthday.month);
      }
      else {
        printf("\nContato não encontrado!\n");
      }

      break;
    case 3:
      char removed_name[40];

      printf("\n -- Remover Contato --\n");

      printf("\nDigite o nome do contato que deseja remover: ");
      scanf("%40[^\n]", removed_name);

      Contact * removed_searched_contact = search_contact(schedulePhone, removed_name);

      if (removed_searched_contact) {
        free(removed_searched_contact);

        printf("\nContado removido com sucesso!\n");
      }
      else {
        printf("\nContato não encontrado!\n");
      }
      break;
    case 4:
      char updated_name[40];

      printf("\n -- Atualizar Contato --\n");

      printf("\nDigite o nome do contato que deseja remover: ");
      scanf("%40[^\n]", updated_name);
      scanf("%*c");

      Contact * updated_contact_searched = search_contact(schedulePhone, updated_name);

      if (updated_contact_searched) {
        Contact contact_updated = create_contact();

        int updated_contact = update_contact(&schedulePhone, updated_name, contact_updated);

        if (updated_contact == 0) {
          printf("\nContato atualizado com sucesso!\n");
        }
        else {
          printf("\nErro ao atualizar contato!\n");
        }
      }
      else {
        printf("\nContato não encontrado!\n");
      }


      break;
    case 5:
      show_all_contacts(schedulePhone);
      break;
    case 6:
      printf("\n -- Remover Contatos Duplicados --\n");

      remove_duplicate_contacts(&schedulePhone);

      printf("\n\nContatos duplicados removidos com sucesso!\n\n");
      break;
    default:
      printf("\nCódigo inválido!\n");
    }
  }

  return 0;
}