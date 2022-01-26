#include <stdio.h>
#include <stdlib.h>
#include <time.h> //nutne pro generovani nahodnych cisel



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
    p[i] = rand() % 50 - 25; //generovani nahodnych cisel
  }
}



//napis funkci jenKladna, ktera vezme pole zdroj a cil a ze zdrojoveho pole prekopiruje vsechna kladna cisla
//do ciloveho pole
//pr.: zdroj: -5 4 7 -2
//     cil: 4 7
int jenKladna(int zdroj[], int cil[], int n)
{
    int j=0;
    for (int i = 0; i < n; i++)
    {
    if (zdroj[i] > 0)
        {
        cil[j] = zdroj[i];
        j++;
        }
    }

    return j;
}

//funkce vrati pocet prvku v poli cil



int main()
{
    srand( (unsigned) time(NULL)); //nutne pro generovani nahodnych cisel
    printf("Zadej pocet prvku v poli: ");
    int n;
    scanf("%d", &n);
    // tady dopln kod

    //definuj pole o n prvcich a napln ho nahodnymi cisly a vypis ho
    int pole[n];
    nahodnePole(pole, n);
    vypisPole(pole, n);

    //definuj dalsi pole o n prvcích, napln ho jen kladnymi cisly z prvniho pole (napis funkci, viz nahore)
    int pole2[n];
    int nn =jenKladna(pole, pole2, n);

    //vypis druhe pole
    vypisPole(pole2, nn);



    printf("\nKoncim, Goog Bye...");
    return 0;
}
