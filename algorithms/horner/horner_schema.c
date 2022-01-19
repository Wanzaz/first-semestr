#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float Horner(int koef[], int n, float cislo)
{
    float suma = 0.0;

    for(int i=0;i<n;i++)
    {
        suma = suma*cislo+koef[i];
    }
    return suma;
}


int main()
{
  int koef[5] = {1, 3, -35, -39, 70};
  float cislo;

  printf("Zadej cislo: ");
  scanf("%f", &cislo);

  printf("Hodnora mnohoclenu je %.2f",Horner(koef,5,cislo) );
  return 0;
}
