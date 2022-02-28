#include <stdio.h>
#include <stdlib.h>

void uknown(int mat[][100]);
void list_matrix(int size, int mat[][100]);
int total(int mat[][100], int n, int m);

int main()
{
    int mat[100][100];
    int n, m;
    n = 4;
    m = 3;

    uknown(mat);
    list_matrix(3, mat);
    printf("The total of the matrix is %d", total(mat, n, m));

    return 0;
}

void list_matrix(int size, int mat[][100])
{
    int i, j;
    for(i=0;i < size;i++)
    {
        for(j=0;j < size;j++)
        {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
}

void uknown(int mat[][100])
{
    int i,j;
    for(i=0; i<3 ;i++)
    {
        for(j=0; j<3; j++)
        {
            if(j==0)
                mat[i][j]= i + 1;
            else
                mat[i][j] = mat[i][j - 1] + 1;
        }
    }
}

int total(int mat[][100], int n, int m)
{
    int i, j, total=0;
    for(i=0;i < n;i++)
    {
        for(j=0;j < m;j++)
        {
            total += mat[i][j];
        }
    }
    return total;
}

