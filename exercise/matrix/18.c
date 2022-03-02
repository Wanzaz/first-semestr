#include <stdio.h>
#include <stdlib.h>

/*
Čtvercová matice  znaků
1. Zkopíruj si kód do nového projektu. -
2. Napiš funkci sachovnice, která vyplní matici tak, že se budou střídat mezery se čtverečky (znak '\333') jako na šachovnici.
3. Naplň matici mat1 sachovnicí a vypiš ji.
4. Definuj matici mat2 (jako mat1).
5. Napiš funkci, která vloží v matici o velikosti n na hlavní a vedlejší diagonálu znak předaný jako parametr. Napřed musíš inicializovat  matici znakem mezery (musíš dát všude mezery).
6. Vlož do mat2 hvezdičky na hlavní a vedlejší diagonálu. Matici mat2 vypiš.
7. Definuj matici mat3.
8. Napiš funkci, která vyplní čtvercovou matici o n řádcích tak, že nad hlavní diagonálou budou hvězdičky a na hlavní diagonále a pod ní budou znaky plus.
9. Aplikuj nejnovější funkci na matici mat3. Pak ji vypiš.

Square matrix of characters
1. Copy the code into the new project.
2. Write a checkerboard function that fills the matrix by alternating spaces with squares (the character '\ 333') as on a checkerboard.
3. Fill the nut with the checkbox and write it out.
4. Define the matrix mat2 (as mat1).
5. Write a function that inserts the character passed as a parameter in the matrix of size n on the main and secondary diagonals. First you have to initialize the matrix with a space character (you have to put spaces everywhere).
6. Insert the asterisks on the main and secondary diagonals in mat2. Write out the matrix mat2.
7. Define the matrix mat3.
8. Write a function that fills a square matrix of n rows so that there are asterisks above the main diagonal and plus signs on and below the main diagonal.
9. Apply the latest function to the matrix mat3. Then write it down.
*/


void init(char mat[][100], int n, char character);
void list(char mat[][100], int n);
void chess(char mat[][100], int n);
void diagonals(char mat[][100], int size);
void diagonals2(char mat[][100], int size, char character);
void diagonals_minu_plus(char mat[][100], int size);
void flag(char mat[][100], int size);

int main()
{
    char mat1[100][100];
    int n;
    printf("Enter size of a matrix: ");
    scanf("%d", &n);

    //2, 3
    chess(mat1, n);
    list(mat1, n);
    printf("\n");

    //4, 5, 6
    char character = '*';
    char mat2[100][100];
    //diagonals(mat2, n);
    diagonals2(mat2, n, character);
    list(mat2, n);

    //7, 8, 9
    char mat3[100][100];
    diagonals_minu_plus(mat3, n);
    list(mat3, n);

    char mat4[100][100];
    flag(mat4, n);
    list(mat4, n);


    printf("\nI am done with matrix ...");
    return 0;
}

void init(char mat[][100], int n, char character)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            mat[i][j] = character;
    }
}

void list(char mat[][100], int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%c ", mat[i][j]);
        printf("\n");
    }
}

//2
void chess(char mat[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if((i+j)%2==0)
                mat[i][j] = '\333';
            else
                mat[i][j] = ' ';
        }
    }
}

void diagonals(char mat[][100], int size)
{
    int i;
    for(i=0;i < size;i++)
    {
        mat[i][i] = '-';
    }

    for(i=0;i < size;i++)
    {
        mat[i][size - 1 - i] = '-';
    }
}

//by teacher
void diagonals2(char mat[][100], int size, char character)
{
    int i, j;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if((i==j) | (i + j) == size - 1)
                mat[i][j] = character;
        }
    }
}

void diagonals_minu_plus(char mat[][100], int size)
{
    int i, j;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            //side diagonal filled
            //if((i + j) > size - 1)
                //mat[i][j] = '*';
            if(j<=i)
                mat[i][j] = '+';
            else
                mat[i][j] = '-';
        }
    }
}

void flag(char mat[][100], int size)
{
    int i;
    for(i=0;i < size/2;i++)
    {
        mat[i][i] = '*'; // first half of main diagonal
    }

    for(i=size/2;i < size;i++)
    {
        mat[i][size - 1 - i] = '*'; // second half of side diagonal
    }

    int index;
    for(index=0; index < size;index++)
    {
        mat[0][index] = '*'; // frist line
        mat[size - 1][index] = '*'; // last line
        mat[index][0] = '*'; // first column
        mat[index][size - 1] = '*'; // last column
    }
}


