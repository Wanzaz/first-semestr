#include <stdio.h>
#include <stdlib.h>

/*2. Napiš funkci, která pro dvě celá čísla vypíše všechny jejich společné dělitele.*/

void spolecne_delitele(int x, int y)
{
    int i, mensi=0;
    mensi = x < y ? x : y; //better way
    /*if(x < y) mensi=x;
    else mensi=y;*/

    for(i=1;i<=mensi; i++)
    {
        if(x%i == 0 && y%i == 0)
            printf("%d, ",i);
    }
}

int main()
{
    int pocet=0, x, y, i;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);

    spolecne_delitele(x, y);

    return 0;
}
