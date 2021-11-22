#include <stdio.h>
#include <stdlib.h>

void vypis(int n)
{
    char space = ' ';
    if(n==0)
        return;
    vypis(n - 1);
    printf("%c %d", space, n);
} 

int main( )
{
    int n;
    printf("Zadej cislo: ");
    scanf("%d", &n);
    vypis(10);
    return 0;
} 

/*Rekurze od n do 1:
-jen přehozením printf a vypisem
void vypis(int n)
{
    if(n==0)
        return;
    printf("%d", n);
    vypis(n - 1);
}
*/
