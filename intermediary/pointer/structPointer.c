#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
  int day, month, year;
} Date;

int main() {
  setlocale(LC_ALL, "Portuguese");

  Date date;

  date.day = 01;
  date.month = 01;
  date.year = 2021;

  printDate(&date);

  printf("\n%d/%d/%d", date.day, date.month, date.year);
}

void printDate(Date * d) {
  printf("\n%d/%d/%d", d->day, d->month, d->year);
}