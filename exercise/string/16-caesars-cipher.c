#include <stdio.h>
#include <stdlib.h>

/*
1. Caesarova šifra: Následující text si vložte do řetězce: "srudgdp vudc mdvqrylgfx. ngh, ngb d y nroln suhgsrnodgdp ylwh."  Zkuste ho rozšifrovat samozřejmě funkcí. Stačí vypsat výsledek. Zkuste to sami jakkoliv. Zašifrovaná jsou pouze písmena, ostatní znaky ponechte tak jak jsou. Pro zjednodušení používám jen malá písmena.


2. Oprava Caesarovy šifry s učitelem. Funkce bude mít vstupní a výstupní řetězec a celé číslo pro posun.
*/

// spatne reseni
/*void cesar_encrypt(char str[], int shift) {
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] < 'a' || str[i] > 'z')
            printf("%c", str[i]);

        else //(str[i] >= 'a' && str[i]<= 'z')
        {
            char c = str[i] - 'a';
            c += shift;
            c = c % 26;
            str[i] = c + 'a';
            printf("%c", str[i]);
        }
        i++;
    }
    printf("\n\n");
}*/

void odsifruj(char s[], int p)
{
    int i=0;

    while(s[i] != '\0')
    {
        if (s[i] > 96 && s[i] < 123)
        {
            if(s[i] + p > 122)
                printf("%c", s[i] + p - 26);
            else
                printf("%c", s[i] + p);
        }
        else
            printf("%c", s[i]);
        i++;
    }

    printf("\n\n");
}

void odsifruj2(char s[], char cil[], int p)
{
    int i=0;

    while(s[i] != '\0')
    {
        if (s[i] > 96 && s[i] < 123)
        {
            if(s[i] + p > 122)
                cil[i] = s[i] + p - 26;
            else
                cil[i] = s[i] + p;
        }
        else
            cil[i] = s[i];
        i++;
    }

    cil[i] = '\0';
}

int main()
{
    char cipher[] = "srudgdp vudc mdvqrylgfx. ngh, ngb d y nroln suhgsrnodgdp ylwh.";

    for(int i=1; i <= 25; i++)
        odsifruj(cipher, i);

    /********************************************************************************/

    char sifra2[1000];
    odsifruj2(cipher, sifra2, 2);
    printf("Ukol 2: %s\n", sifra2);

    return 0;
}
