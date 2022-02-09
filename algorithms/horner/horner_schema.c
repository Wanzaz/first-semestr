#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Hornerovo schéma
Napiš funkci horner, která vezme pole koeficientů, počet koeficientů a číslo x (všechno to budu celá čísla) a vrátí funkční hodnotu této funkce v bodě x. Pokud se rovná 0, jedná se o kořen rovnice.
Vyřeš pomocí funkce horner tuto rovnici:
x4 + 3x3 – 35x2 – 39x + 70= 0
Pomůcka: int koeficienty[5] = {1, 3, -35, -39, 70};
Celé kořeny (pokud existují) jsou dělitelé absolutního členu (70). Vypiš si tedy možné kořeny a všechny vyzkoušej.
Výstup:
Hornerovo schema!
Cislo 1 je koren.
Cislo -1 neni koren.
Cislo 2 neni koren.
Atd…
*/

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

  printf("Hodnota mnohoclenu je %.2f",Horner(koef,5,cislo) );
  return 0;
}
