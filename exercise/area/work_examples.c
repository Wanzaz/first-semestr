#include <stdio.h>
#include <stdlib.h>
#define MAX 100

/*
1. Nadefinujte si symbolickou konstantu MAX na hodnotu 100.
2. Definujte pole celých čísel o maximální velikosti MAX.
3. Definujte proměnnou n a načtěte do ní z klávesnice aktuální počet prvků v poli.
4. Napište funkci, která načte n hodnot z klávesnice do pole.
5. Napište funkci, která vypíše pole (na jeden řádek s mezerou mezi čísly)
6. Napiš funkci, která ke každému prvku v poli přičte číslo 2. Po volání této funkce, zavolejte opět funkci pro výpis pole.
7. Nadefinujte si další pole o stejné velikosti jako to první. Napište funkci, která vloží do tohoto druhého pole čísla od 1 do n. Pak toto pole vypište funkcí výpis, kterou už máme napsanou.
*/

void nacteni_hodnot(int pole[], int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("\nEnter %d. element of area: ", i + 1);
    scanf("%d", &pole[i]);
  }
}

void vypis_hodnot(int pole[], int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("%d ", pole[i]);
  }
}

void pricteni_dvojky(int pole[], int n, int cislo)
{
    int i;
    for(i=0;i<n;i++)
  {
    pole[i] = pole[i] + cislo;
  }
}

void napln(int pole[], int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    pole[i] = i + 1;
  }
}

int main()
{
  int pole[MAX], n, pole2[MAX];
  printf("Zadej velikost pole: ");
  scanf("%d", &n);
  nacteni_hodnot(pole, n);
  vypis_hodnot(pole, n);
  pricteni_dvojky(pole, n, 2);
  vypis_hodnot(pole, n);
  napln(pole2, n);
  vypis_hodnot(pole2, n);
  return 0;
}
