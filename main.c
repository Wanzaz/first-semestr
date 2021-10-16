#include <stdio.h>
#include <stdlib.h>

/**Mocnina cisla**/
//My solution

int mocnina(int x, int n)
{
    int i, M=1;

    for(i=1;i<=n;i++) //i++ = i=i+1
    {
        M=M*x;
    }

    return M;
}



int main()
{
    int n,x;
    printf("Zadej cislo: ");
    scanf("%d",&x);
    printf("Zadej mocninu cisla: ");
    scanf("%d",&n);

    printf("Mocnina %d na cislu %d je %d \n",n,x,mocnina(x,n));

    return 0;
}
