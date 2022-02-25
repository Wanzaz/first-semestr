#include <stdio.h>
#include <stdlib.h>


/*
two squares in main diagonal:
****    
****
****
****
    ****
    ****
    ****
    ****
*/

void square(int n, char m[][100]);
void list(int size, char mat[][100]);

int main()
{
    char matrix[100][100];
    int size = 10;

    square(size, matrix);
    list(size, matrix);

    return 0;
}

void list(int size, char mat[][100])
{
    int i, j;
    for(i=0;i < size;i++)
    {
        for(j=0;j < size;j++)
        {
            printf("%c", mat[i][j]);
        }
        printf("\n");
    }
}

void square(int n, char m[][100])
{
    int i, j;

    for(i=0;i < n/2; i++)
    {
        for(j=0;j < n/2; j++)
        {
            m[i][j] = '*';
        }
    }

    for(i = n/2;i < n; i++)
    {
        for(j = n/2;j < n; j++)
        {
            m[i][j] = '*';
        }
    }
}
