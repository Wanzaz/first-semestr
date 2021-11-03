#include <stdio.h>
#include <stdlib.h>


int container_counter(int K)
{
    int x, P=0;

    while(K > 0)
    {
        printf("%d kg is availabe. Enter number of kg: ", K);
        scanf("%d", &x);
        if(K - x >= 0)
        {
            K = K - x;
            P++;
        }
        else
        {
            printf("The container is already full! \n");
        }

    }
    return P;
}


int main()
{
    int container;
    printf("Enter the container size: ");
    scanf("%d", &container);

    printf("The amount of packages %d", container_counter(container));
    return 0;
}
