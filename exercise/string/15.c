#include <stdio.h>
#include <stdlib.h>

int delkaRetezce(char retezec[])
{
    int n;
    for (n=0; retezec[n] != '\0'; n++)
        ;
    return n;
}

// neefektivni kvuli for cyklu ktery se opakuje porad
// lepsi by byla jedna funkce na otoceni stringu na konci
void vlozNaZacatek(char retezec[], char znak)
{
    int delka = delkaRetezce(retezec);
    for (int i = delka; i >= 0; i--)
        retezec[i+1] = retezec[i];
    retezec[0] = znak;
}

void prevodZDesitkove(int cislo, char retezec[], int z)
{
    int zbytek;
    while (cislo > 0)
    {
        zbytek = cislo % z;


        if(zbytek > 9)
            vlozNaZacatek(retezec, zbytek + 55); // 55 protoze ascii preskakuje 7 mist
        else
            vlozNaZacatek(retezec, zbytek + '0');
        cislo = cislo / z;
    }
}


int prevodDoDesitkove(char retezec[], int zaklad)
{
    int delka = delkaRetezce(retezec);
    int suma=0;

    for(int i=0; i < delka; i++)
    {
        if(retezec[i] < '9')
            suma = suma*zaklad+(retezec[i]-48);
        else
            suma = suma*zaklad+(retezec[i]-55);
    }

    return suma;
}

int main()
{
    char prevod[1000] = ""; //prazdne pole
    int cislo, zaklad;
    printf("Zadej desitkove cislo cislo: ");
    scanf("%d", &cislo);
    printf("Zadej do jakeho zakladu prevadime: ");
    scanf("%d", &zaklad);

    prevodZDesitkove (cislo, prevod, zaklad);
    printf("%d v desitkove soustave = %s v soustave o zakladu %d",cislo, prevod, zaklad);

    /***********************************************************************************/
    char retezec[1000];
    int vysledek;

    printf("\nZadej cislo: ");
    scanf("%999s", &retezec);
    printf("Zadej zaklad: ");
    scanf("%d", &zaklad);

    vysledek = prevodDoDesitkove(retezec, zaklad);
    printf("Cislo %s o zakladu %d = %d v desitkove soustave", retezec, zaklad, vysledek);



    return 0;
}


/*
output:
Zadej desitkove cislo cislo: 47
Zadej do jakeho zakladu prevadime: 16
47 v desitkove soustave = 2? v soustave o zakladu 16
Process returned 0 (0x0)   execution time : 4.166 s
Press any key to continue.

output:
Zadej desitkove cislo cislo: 47
Zadej do jakeho zakladu prevadime: 16
47 v desitkove soustave = 2F v soustave o zakladu 16
Process returned 0 (0x0)   execution time : 4.167 s
Press any key to continue.

output:
Zadej desitkove cislo cislo: 48
Zadej do jakeho zakladu prevadime: 2
48 v desitkove soustave = 110000 v soustave o zakladu 2
Zadej cislo: AAF1
Zadej zaklad: 16
Cislo AAF1 o zakladu 16 = 43761 v desitkove soustave
Process returned 0 (0x0)   execution time : 27.919 s
Press any key to continue.

*/
