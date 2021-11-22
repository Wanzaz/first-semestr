#include <stdio.h>
#include <stdlib.h>

int faktorial(int n)
{
    if (n==1)
         return 1;
    return n * faktorial(n-1);
} 

int main ( )
{
    int n;
    printf("Zadej cele kladne cislo: ");
    scanf("%d", &n);
    printf("Faktorial cisla %d je %d", n, faktorial(n));
    return 0;
}
