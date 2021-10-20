#include <stdio.h>
#include <stdlib.h>


float prumer(int pocet)
{
    int i;
    float S=0, x;

    for(i=1; i<=pocet; i++)
    {
        printf("Zadej cislo: ");
        scanf("%f", &x);
              S = S + x;
    }

    return S/pocet;
}



int main()
{
    int n;

    printf("Zadej pocet cisel: ");
    scanf("%d", &n);

    printf("Aritmeticky prumer je %.2f", prumer(n));
    return 0;
}
