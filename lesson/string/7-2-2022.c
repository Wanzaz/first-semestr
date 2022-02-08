#include <stdio.h>
#include <stdlib.h>

int delka_retezce(char str[])
{
    int n;
    for(n=0; str[n] != '\0';n++)
        ;
    return n;
}


//funkce od ucitelky

void vloz_na_zacatek(char str[],char znak)
{
    int konec = delka_retezce(str);
    int i;
    for(i=konec; i > 0; i--)
        str[i + 1] = str[i];
    str[0] = znak;
    //str[konec] = '\0';
}


// prevod z desitkove do dvojkove soustavy
//zatim to nefunguje
void prevod(int num, char str[])
{
    int konec = delka_retezce(str);
    str[konec] = '\0';

    while(num > 0)
    {
        int rest = num % 2;

        if(rest==0)
            vloz_na_zacatek(str, '0');
        else
            vloz_na_zacatek(str, '1');

        num = num / 2;
    }

}


int main()
{
    char str[100] = "  ";
    int num = 3;
    char znak = 'P';
    //char prazdny = "";

    //printf("%d\n", delka_retezce(str));
    vloz_na_zacatek(str, znak);
    puts(str);
    prevod(num, str);
    puts(str);

    //prevod(num, str);

    return 0;
}

