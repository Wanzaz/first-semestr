#include <stdio.h>
#include <stdlib.h>


/*
1.nadefinujte mi textovy retez ktery bude mit 50 znaku skola
2.dejte kopie skoly
3.nactete hodnotu z klavesnice do skola
4.napis funkci ktera zkopiruje skolu do kopie
 */

void kopie_retezce(char zdroj[],char cil[])
{
    int i;
    for(i=0;zdroj[i]!='\0';i++)
    {
        cil[i] = zdroj[i];
    }
    cil[i]='\0';
}


int main()
{
    char skola[51];
    char kopie[51];
    scanf("%50s", skola);
    printf("Chodim na skolu %s", skola); //nedava se %50s kvuli bilym mezeram



    kopie_retezce(skola,kopie);

    sprintf(kopie,"%s",skola);
    puts(kopie);

    return 0;
}






