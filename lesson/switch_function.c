#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// This program gives you option to choose from 
// if you do not want anything just enter 0

void list(int mat[][100], int size_column, int size_row);
void init_random(int mat[][100], int size_column, int size_row);
void init_specific_number(int mat[][100], int size_column, int size_row, int number);
void init_your_number(int mat[][100], int size_column, int size_row);
void menu();

int main()
{
    srand( (unsigned) time(NULL));
    int mat[100][100];
    int size_column, size_row, number, user_option=1;
    printf("Enter size of matrix column: ");
    scanf("%d", &size_column);
    printf("Enter size of matrix row: ");
    scanf("%d", &size_row);

    menu();
    //scanf("%d",  &user_option);

    while(user_option!=0)
    {
        printf("Enter: ");
        scanf("%d",  &user_option);
        switch (user_option)
        {
        case 1: init_random(mat, size_column, size_row); break;
        case 2: init_your_number(mat, size_column, size_row); break;
        case 3:
            printf("Enter a number that will fill the matrix: ");
            scanf("%d", &number);
            init_specific_number(mat, size_column, size_row, number);
            break;
        case 4: list(mat, size_column, size_row); break;
        case 0: printf("Done...\n"); break;
        default: printf("Try again...\n"); break;
        }
    }

    return 0;
}

void menu()
{
    printf("Enter 1 for inserting random numbers into matrix\n");
    printf("Enter 2 for inserting your numbers into matrix\n");
    printf("Enter 3 for inserting one specific number into matrix\n");
    printf("Enter 4 for listing matrix\n");
    printf("Enter 0 for quit\n");
}

void init_random(int mat[][100], int size_column, int size_row)
{
    for (int i = 0; i < size_column; i++)
    {
        for (int j = 0; j < size_row; j++)
            mat[i][j] = rand() % 10;
    }
}

void init_specific_number(int mat[][100], int size_column, int size_row, int number)
{
    for (int i = 0; i < size_column; i++)
    {
        for (int j = 0; j < size_row; j++)
            mat[i][j] = number;
    }
}

void init_your_number(int mat[][100], int size_column, int size_row)
{
    for (int i = 0; i < size_column; i++)
    {
        for (int j = 0; j < size_row; j++)
        {
            printf("Enter an element of area: ");
            scanf("%d", &mat[i][j]);
        }
    }
}

void list(int mat[][100], int size_column, int size_row)
{
    int column, row;
    for(column = 0; column < size_column ; column++)
    {
        for(row = 0; row < size_row ; row++)
            printf("%d ", mat[column][row]);
        printf("\n");
    }
}
