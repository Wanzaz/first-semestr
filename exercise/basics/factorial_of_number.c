#include <stdio.h>
#include <stdlib.h>

/**Faktorial cisel**/
//

int faktorial(int n)
{
    int i, F=1;

    for(i=1;i<=n;i++) //i++ = i=i+1
    {
        F=F*i;
    }

    return F;
}



int main()
{
    int n, i, F=1;
    printf("Zadej cislo: ");
    scanf("%d",&n);

    printf("Faktorial cisla %d je %d \n",n,faktorial(n));

    return 0;
}
