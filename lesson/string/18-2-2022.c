#include <stdio.h>
#include <stdlib.h>

/*
1 napiste funkci ktera zmeni kazdy druhy znak na hvezdicku
1 write a function which changes every second character to star
*/

void replace_with_star(char str[]);


int main()
{
    char str[40];
    printf("Enter something to str: ");
    scanf("%39s", str);

    replace_with_star(str);
    puts(str);

    return 0;
}


void replace_with_star(char str[])
{
    int i;
    for(i=0;str[i] != '\0'; i++)
    {
        if(i%2==1)
            str[i] = '*';
    }
}


