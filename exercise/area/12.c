#include <stdio.h>
#include <stdlib.h>
#include <time.h> //nutne pro generovani nahodnych cisel

/*
Znovu si vytvoř nový projekt a zkopíruj do něj obsah přiloženého souboru main.c. S vyučujícím rozeber kód. Následující body splň voláním již napsaných funkcí (kromě bodu 4):
1. Vypiš průměr čísel v poli na dvě desetinná čísla takto: Prumer cisel v poli je 16.58.
2. Vypiš největší číslo v poli: Nejvetsi cislo v poli je 49.
3. Vypiš index největšího čísla v poli: Index nejvetsiho cisla v poli je 8.
4. Definuj funkci, která vrátí počet nadprůměrných čísel v poli. Využij přitom funkci průměr.
5. Vypiš počet nadprůměrných čísel v poli: Pocet nadprumernych cisel v poli je 6.
*/


//zkusebni program na volani funkci (bude jich opravdu hodne)

void vypisPole(int p[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", p[i]);
  }
  printf("\n");
}

void nahodnePole(int p[], int n)
{
  for (int i = 0; i < n; i++)
  {
    p[i] = rand() % 50; //generovani nahodnych cisel
  }
}
int soucetPole(int p[], int n)
{
  int soucet = 0;
  for (int i = 0; i < n; i++)
  {
    soucet = soucet + p[i];
  }
  return soucet;
}


int nejvetsiCislo(int p[], int n)
{
  int max = p[0];
  for (int i = 0; i < n; i++)
  {
    if (max < p[i])
      max = p[i];
  }
  return max;
}

int poziceNejvetsihoCisla(int p[], int n)
{
  int max = 0;
  for (int i = 0; i < n; i++)
  {
    if (p[max] < p[i])
      max = i;
  }
  return max;
}

float prumerCisel(int p[], int n)
{
  int soucet = soucetPole(p, n);
  float prumer = (soucet * 1.)/n;
  return prumer;
}

int pocetNadprumernychCisel(int p[], int n)
{
  //dopln kod, prikaz return uprav
  int fun, pocet;
  fun = prumerCisel( p, n);
  
  for (int i = 0; i < n; i++)
  {
    if (fun < p[i])
      pocet++;
  }

  return pocet;
}

int main()
{
    srand( (unsigned) time(NULL)); //nutne pro generovani nahodnych cisel
    printf("Zadej pocet prvku v poli: ");
    int n;
    scanf("%d", &n);
    int a[n];
    nahodnePole(a, n);
    vypisPole(a, n);
    // tady dopln kod

    //1
    printf("\nPrumer prvku pole je: %f.2", prumerCisel(a, n));

    //2
    printf("\nNejvetsi cislo pole je: %d", nejvetsiCislo(a, n));

    //3
    printf("\nNejvetsi cislo pole je: %d", poziceNejvetsihoCisla(a, n));

    //4 svoje funkce

    //5
    printf("\nPoce nadprumernych cisel je: %d", pocetNadprumernychCisel(a, n));



    printf("\nKoncim, Goog Bye...");
    return 0;
}
