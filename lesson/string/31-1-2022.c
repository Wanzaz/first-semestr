#include <stdio.h>

/*Prohozeni prvniho a posledniho prvku ve stringu ktery nevime jak je dlouhy*/


void prehod(char s[])
{
    int i;
    for(i=0;s[i] != '\0';i++)
        {;}
    char pom = s[0];
    s[0] =s[i - 1];
    s[i - 1] = pom;
}

int main() 
{
    char s[10];
    scanf("%s", string);
    prehod(s);
    printf("%[9]s", string);
}
