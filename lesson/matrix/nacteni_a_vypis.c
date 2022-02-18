#include <stdio.h>
#include <stdlib.h>

void nacti(int p[] [100], int n, int m)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
            scanf("%d", &p[i] [j]);
    }
}

void vypis(int p[] [100], int n, int m)
{
    int i, j;
    for(i = 0; i < n ; i++)
    {
        for(j = 0; j < m ; j++)
            printf("%d ", p[i][j]);
        printf("\n"); // na konci řádku se přejde na nový
    }

}

int main()
{
    int pole[100][100];
    int n = 3, m = 4;
    nacti(pole, n, m);
    vypis(pole, n, m);
    return 0;
}

