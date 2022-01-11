#include <stdio.h>
#include <stdlib.h>

int dokonale(int n)
{
    int i, S=0;
    for(i=1; i<= n/2; i++)
    {
        if(n%i==0)
            S = S + i;
    }

    if(S==n) //return (S==n);
        return 1;
    else
        return 0;
}




int main()
{
    int n, i, S=0;
    printf("Enter numbers: ");
    scanf("%d", &n);

    for(i=1; i<= n; i++)
    {
        if(dokonale(i)==1)
            printf("%d, ", i);
    }

    /**if (dokonale(n)==1)
        printf("Cislo %d je dokonale", n);
    else
        printf("Cislo %d neni dokonale", n);**/

    return 0;
}

