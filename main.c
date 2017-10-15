#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>

/*
int delkaRetezce(char *data)
{
    int delka = 0;

    while (data[delka] != '\0')
    {
        delka++;
    }

    return delka;
}
ú
*/

int jeCislo(char *data)
{
  int c;
  int cislo = 0;
  int delka = strlen(data);

  for (c = 0; c < delka; c++) //iteruje do konce delky retezce
  {
      if(isdigit(data[c]) == 0) // pokud pomoci funkce isdigit narazi na neciselny znak breakne a vrati hodnotu 0 -> nejedna se o cislo
      {
          cislo = 0;
          break;
      }
      else
      {
          cislo = 1; //pokud doiteruje do konce retezce bez nalezeni necisleneho znaku vraci 1 -> jedna se o cislo
      }

  }
  return cislo;
}


int vstup;
char data[101];
/*int argc, char const *argv[]*/

int main(void)
{

printf ("Zadej data:\n");
vstup = scanf("%s", data); //uloží vstup z klávesnice do pole data


  while (vstup != EOF)
  {
    if (jeCislo(data) == 1)
    {
      unsigned int cisloVstup = atoi(data);
      printf("Integer, které jste zadali je: %d\n", cisloVstup);
      printf("Převedeno do hexadecimální soustavy číslo je: %X\n", cisloVstup);
    }

    else if (jeCislo(data) == 0)
    {
      printf("Slovo, které jste zadali je: %s\n", data);
    }

    vstup = scanf("%s", data); //ceka stale na dalsi vstup
  }

  return 0;
}
