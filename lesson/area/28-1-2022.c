#include <stdio.h>
#include <stdlib.h>

void nacteni(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
      printf("Enter %d. element of area: ", i + 1);
      scanf("%d", &a[i]);
    }
}

/*
1.dej do pole 20 nahodnych cisel
 */

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


float prumerCisel(int p[], int n)
{
  int soucet = soucetPole(p, n);
  float prumer = (soucet * 1.)/n;
  return prumer;
}


int main()
{
    float cisla[100];
    nahodnePole(cisla, 20);
    vypisPole(cisla,20);

    int n, a[n];
    printf("Zadej cislo n: ");
    scanf("%d", &n);

    nacteni(a, n);
    printf("Prumer 10 cisel je %f", prumerCisel(cisla, n);

    return 0;
}






