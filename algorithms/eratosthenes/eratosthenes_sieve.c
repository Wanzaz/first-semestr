#include <stdio.h>

/*
Eratosthenovo síto
Zadej z klávesnice celé kladné číslo n. Vypiš všechna prvočísla do čísla n pomocí Eratosthenova síta:
Pomůcka: int sito[n+1]; //n musí být  již načtené
Budeš potřebovat funkci pro inicializaci pole (nastaví nultý a první prvek pole  třeba na -1 a všechny ostatní pozice na 1).
Další funkcí bude eratosthenes(int p[], int n), který nastaví 0 pro všechny násobky prvočísel. Viz teorie.
Poslední funkcí je výpis prvočísel, kdy se vytisknout indexy těch prvků, které mají hodnotu 1. To jsou prvočísla.
*/


void inicializace(int pole[], int velikost)
{
    pole[0] = pole[1] = -1;
    for(int i=2; i < velikost;i++)
    {
        pole[i] = 1;
    }
}

void eratosthen(int pole[], int velikost)
{
    for(int i = 2; i< velikost; i++)
    {
        for(int j = 2; i*j < velikost; j++)
        {
            pole[i*j]=0;
        }
    }
}

void vypis(int pole[], int velikost)
{
    for(int i=0; i<velikost;i++)
    {
        if(pole[i]==1)
            printf("%d, ",i);
    }
}

int main()
{
    int n;
    printf("Zadej velikost: ");
    scanf("%d", &n);

    int pole[n+1];
    inicializace(pole, n+1);
    eratosthen(pole, n+1);
    vypis(pole,n+1);

    return 0;
}
