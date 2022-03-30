#include <stdio.h>
#include <stdlib.h>

/*
11. Otevři si nový projekt. Překopíruj do něj kód z přiloženého souboru.
12. Prostuduj kód.
13. Doplň funkce pro součin a součet zlomku (funkce budou vracet zkrácený zlomek a k výpisu dojde ve funkci main: 5/6 + 7/6 = 2/1. Začněte součinem, je lehčí.
*/

/*definice struktury*/
typedef struct {
  int citatel;
  int jmenovatel;
}ZLOMEK;

/* vypis nabidky */
void menu()
{
  printf("Novy prvni zlomek ......1\n");
  printf("Novy druhy zlomek ......2\n");
  printf("Soucet zlomku ..........3\n");
  printf("Soucin zlomku ..........4\n");
  printf("Zkraceni zlomku ........5\n");
  printf("Vypis zlomku ...........6\n");
  printf("Konec programu .........0\n");
}

/* vypis jednoho zlomku */
void vypisZlomek(ZLOMEK z)
{
  printf("%d/%d ", z.citatel, z.jmenovatel);
}

/* funkce, ktera nacte zlomek a vrati ho*/
ZLOMEK zadejZlomek()
{
  ZLOMEK z;
  printf("Zadej citatel: ");
  scanf("%d", &z.citatel);
  printf("Zadej jmenovatel: ");
  scanf("%d", &z.jmenovatel);
  return z;
}

/*funkce, ktera vraci nejvetsi spolecny delitel dvou celych cisel*/
int NSD(int a, int b)
{
  while(b != 0)
    {
      int pom = a % b;
      a = b;
      b = pom;
    }
  return a;
}

/*funkce, ktera zkrati zlomek a vrati ho zpet*/
ZLOMEK zkratZlomek(ZLOMEK z)
{
  int delitel = NSD(z.citatel, z.jmenovatel);
  z.citatel /= delitel;
  z.jmenovatel /= delitel;
  return z;
}

ZLOMEK soucin(ZLOMEK z1, ZLOMEK z2)
{
    ZLOMEK z;
    z.citatel = z1.citatel * z2.citatel;
    z.jmenovatel = z1.jmenovatel * z2.jmenovatel;
    return z;
}

ZLOMEK soucet(ZLOMEK z1, ZLOMEK z2)
{
    ZLOMEK z;
    z.citatel = z1.citatel * z2.jmenovatel + z2.citatel * z1.jmenovatel;
    z.jmenovatel = z1.jmenovatel * z2.jmenovatel;
    return z;}

int main(void) {
  printf("Prace se zlomky\n");
  ZLOMEK z1 = {5, 4}, z2 = {6, 3}, z3;
  int volba = 1;
  while (volba != 0)
  {
    system("cls"); //smaze obrazovku
    vypisZlomek(z1);
    vypisZlomek(z2);
    printf("\n");
    menu();
    scanf("%d", &volba);
    switch(volba)
    {
      case 1:z1 = zadejZlomek();
             break;
      case 2:z2 = zadejZlomek();
             break;
      case 3:z3 = soucet(z1, z2);
             z3 = zkratZlomek(z3);
             vypisZlomek(z1);
             printf("+ ");
             vypisZlomek(z2);
             printf("= ");
             vypisZlomek(z3);
             break;
      case 4:z3 = soucin(z1,z2);
             z3 = zkratZlomek(z3);
             vypisZlomek(z1);
             printf("* ");
             vypisZlomek(z2);
             printf("= ");
             vypisZlomek(z3);
             break;
      case 5:z1 = zkratZlomek(z1);
             z2 = zkratZlomek(z2);
             break;
      case 0:printf("Koncim a jdu domu.\n");
             break;
      default:printf("Netrefil ses, zkus to znovu.\n");
              break;
    }
    system("pause"); //pocka na stisk klavesy
  }
  return 0;
}

