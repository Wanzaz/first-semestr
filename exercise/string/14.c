#include <stdio.h>
#include <stdlib.h>

#define MAX 1000


void naplnZnakem (char r[], int n, char znak)
{
    int i; //musi byt deklarovano mimo for cyklus jinak to nebude fungovat
    for (i = 0; i < n; i++)
    {
        r[i] = znak;
    }
    r[i] = '\0';
}


void abcd(char r[], char zacatek, char konec)
{
    /*if (zacatek > konec)
    {
        r[0]='\0';
        return;
    }*/
    int pocet = 0;
    for (char i = zacatek; i <= konec; i++)
    {
        r[pocet] = i;
        pocet++;
    }
    r[pocet] = '\0';
}


void Zretez(char cil[], char r1[], char z2[])
{
    int j=0, p=0, i=0;
    while(r1[i] != '\0' && z2[j]!='\0')
    {
        if (p%2==0)
        {
            cil[p] = r1[i];
            p++;
            i++;
        }
        else
        {
            cil[p] = z2[j];
            j++;
            p++;
        }
    }

    while(r1[i]!= '\0')
    {
        cil[p]=r1[i];
        p++;
        i++;
    }

    while(z2[j]!= '\0')
    {
        cil[p]=z2[j];
        p++;
        j++;
    }
}


int main(void)
{
    printf("Zadej pocet znaku v retezci\n");
    int pocetZnaku;
    scanf("%d", &pocetZnaku);

    while (pocetZnaku >= MAX || pocetZnaku < 1)
    {
        printf("Netrefil ses, zadej jiny pocet:");
        scanf("%d", &pocetZnaku);
    }

    /*char z;
    printf("Zadej znak: ");
    scanf("\n%c", &z); // jeden zpusob jak se vyhnout omylem zadani ENTERU
    //scanf("\n%c", &z); jeden zpusob jak se vyhnout omylem zadani ENTERU*/

    char r1[MAX];
    //naplnZnakem(r1, pocetZnaku, z);
    naplnZnakem(r1, pocetZnaku, 48); //48 v ASCII tabulce je 0


    puts(r1);

    abcd(r1, 'A', 'x');
    puts(r1);


    char ret2[MAX], ret3[MAX];
    abcd(ret2, 'A', 'Z');
    abcd(ret3, 'a', 'z');
    puts(ret2);
    puts(ret3);

    printf("Zadej retezec 1: ");
    scanf("%999s", r1);
    printf("Zadej retezec 2: ");
    scanf("%999s", ret3);
    char ret4[2*MAX];
    Zretez(ret4,r1,ret3);
    puts(ret4);

    return 0;
}

