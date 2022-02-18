#include <stdio.h>
#include <stdlib.h>

void init(char mat[][100], int current_size, char character);
void list_matrix(char mat[][100], int current_size);
void fill_main_diagonal(char mat[][100], int size);
void fill_side_diagonal(char mat[][100], int size);
void fil_first_line(char mat[][100], int size,char character);




int main()
{
    char matrix[100][100];
    int size = 10;
    char character;
    printf("Enter a character: ");
    scanf("%1c", &character); // or "\n%c"

    init(matrix, size, character);
    list_matrix(matrix, size);

    fill_main_diagonal(matrix, size);
    list_matrix(matrix, size);

    fill_side_diagonal(matrix, size);
    list_matrix(matrix, size);

    //fill_first_line(matrix, size, character);

    return 0;
}

// fill the matrix with a character
void init(char mat[][100], int size, char character)
{
    int i, j;
    for(i=0;i < size;i++)
    {
        for(j=0; j < size; j++)
        {
            mat[i][j] = character;
        }
    }
}

void list_matrix(char mat[][100], int size)
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

void fill_main_diagonal(char mat[][100], int size)
{
    int i;
    for(i=0;i < size;i++)
    {
        mat[i][i] = '-';
    }
}

void fill_side_diagonal(char mat[][100], int size)
{
    int i;
    for(i=0;i < size;i++)
    {
        mat[i][size - 1 - i] = '-';
    }
}

// fill the first line of matrix with a character, which is set as parametr
void fill_first_line(char mat[][100], int size, int character)
{
    int index;
    for(index=0; index < size;index++)
    {
        mat[0][index] = '*';
    }
}


