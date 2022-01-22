#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
  char name[50];
  int day, month, year;
} Contact;

void printSchedule(Contact ** c, int quantity) {

  printf("\n\t\tLista de Contatos:\n");
  printf("\t--------------------------------\n");
  for (int i = 0; i < quantity; i++) {
    printf("\t%d = %2d/%2d/%4d\t%s\n", i + 1, c[i]->day, c[i]->month, c[i]->year, c[i]->name);
  }
  printf("\t--------------------------------\n");
}

int registerContact(Contact ** c, int quantity, int size) {
  if (quantity < size) {
    Contact * new = malloc(sizeof(Contact));

    printf("\nDigite o nome do contato: ");
    scanf("%50[^\n]", new->name);

    printf("\nDigite a data de aniversario dd mm aaaa: ");
    scanf("%d%d%d", &new->day, &new->month, &new->year);
    getchar();

    c[quantity] = new;

    return 1;
  }
  else {
    printf("\n\tImpossivel novo cadastro. Vetor cheio!\n");
    return 0;
  }
}

void changeContact(Contact ** c, int quantity) {
  int id;

  printSchedule(c, quantity);

  printf("\n\tDigite o codigo do contato que deseja alterar: \n");
  scanf("%d", &id);
  getchar();
  id--;

  if (id >= 0 && id < quantity) {
    Contact * new = malloc(sizeof(Contact));

    printf("\nDigite o nome do contato: ");
    scanf("%50[^\n]", new->name);

    printf("\nDigite a data de aniversario dd mm aaaa: ");
    scanf("%d%d%d", &new->day, &new->month, &new->year);
    getchar();

    c[id] = new;

  }
  else
    printf("\n\tCodigo invalido!\n");
}

void saveFile(Contact ** c, int quantity, char filename[]) {
  FILE * file = fopen(filename, "w");

  if (file) {
    fprintf(file, "%d\n", quantity);

    for (int i = 0; i < quantity; i++) {
      fputs(c[i]->name, file);
      fputc('\n', file);
      fprintf(file, "%d %d %d\n", c[i]->day, c[i]->month, c[i]->year);
    }

    fclose(file);
  }
  else {
    printf("\nNAO FOI POSSIVEL SALVAR O ARQUIVO!\n");
  }
}



int readFile(Contact ** c, char filename[]) {
  FILE * file = fopen(filename, "r");
  int quantity = 0;
  Contact * new;

  if (file) {
    fscanf(file, "%d\n", &quantity);

    for (int i = 0; i < quantity; i++) {
      new = malloc(sizeof(Contact));
      fscanf(file, "%50[^\n]", new->name);
      fscanf(file, "%d %d %d\n", &new->day, &new->month, &new->year);

      c[i] = new;
    }

    fclose(file);
  }
  else {
    printf("\nNAO FOI POSSIVEL ABRIR O ARQUIVO!\n");
  }

  return quantity;
}

void saveFileB(char filename[], Contact ** c, int quantity) {
  FILE * file = fopen(filename, "wb");

  if (file) {
    for (int i = 0; i < quantity; i++) {
      fwrite(c[i], sizeof(Contact), 1, file);
    }

    fclose(file);
  }
  else {
    printf("\nNAO FOI POSSIVEL ABRIR O ARQUIVO!\n");
  }
}

int readFileB(char filename[], Contact ** c) {
  int quantity = 0;
  Contact * new = malloc(sizeof(Contact));
  FILE * file = fopen(filename, "rb");

  if (file) {
    while (fread(new, sizeof(Contact), 1, file)) {
      c[quantity] = new;
      quantity++;
      new = malloc(sizeof(Contact));
    }

    fclose(file);
  }
  else {
    printf("\nNAO FOI POSSIVEL ABRIR O ARQUIVO!\n");
  }

  return quantity;
}

const changeFileB(char filename[]) {
  FILE * file = fopen(filename, "rb+");
  Contact c;
  int id, i = 1;

  if (file) {
    printf("\tLista de contatos:\n");
    printf("\t----------------------------\n");
    while (fread(&c, sizeof(Contact), 1, file)) {
      printf("\t%d = %2d/%2d/%4d\t%s\n", i, c.day, c.month, c.year, c.name);
      i++;
    }
    printf("\t----------------------------\n");

    printf("\nDigite o indice do contato que deseja alterar: ");
    scanf("%d", &id);
    getchar();
    id--;

    if (id >= 0 && id < i - 1) {
      printf("\n\tDigite o nome e data de nascimento (dd mm aaaa): ");
      scanf("%49[^\n]%d%d%d", c.name, &c.day, &c.month, &c.year);

      fseek(file, id * sizeof(Contact), SEEK_SET);

      fwrite(&c, sizeof(Contact), 1, file);
    }
    else {
      printf("\nId de contato invalido!\n");
    }

    fclose(file);

  }
  else {
    printf("\nNAO FOI POSSIVEL ABRIR O ARQUIVO!\n");
  }
}

int main() {

  Contact * schedule[50];
  int size = 50, quantity = 0, code;
  char filename[] = { "./schedule.txt" }, filename2[] = { "./schedule.dat" };

  do {
    printf("\n\n\n\n\n==========================================");
    printf("\n\t0 - Sair\n\t1 - Cadastrar\n\t2 - Alterar\n\t3 - Imprimir\n\t4 - Salvar\n\t5 - Ler arquivo\n\t6 - SalvarB\n\t7 - LerB\n\t8 - AlterarB\n");
    printf("==========================================");
    printf("\nCodigo: ");
    scanf("%d", &code);
    getchar();

    switch (code) {
    case 1:
      quantity += registerContact(schedule, quantity, size);
      break;
    case 2:
      changeContact(schedule, quantity);
      break;
    case 3:
      printSchedule(schedule, quantity);
      break;
    case 4:
      saveFile(schedule, quantity, filename);
      break;
    case 5:
      quantity = readFile(schedule, filename);
      break;
    case 6:
      saveFileB(filename2, schedule, quantity);
      break;
    case 7:
      quantity = readFileB(filename2, schedule);
      break;
    case 8:
      changeFileB(filename2);
      break;
    default:
      if (code != 0) {
        printf("\nCodigo invalido!\n");
      }
    }

  } while (code != 0);

  return 0;
}
