#include <stdio.h>
#include <stdlib.h>

/*
1. Načtěte si celé číslo n = velikost čtvercové matice.
2. Definujte čtvercovou matici znaků o velikosti n × n. Pojmenujte ji mat1.
3. Napište funkci vlozZnaky1, která vyplní matici jenom hvězdičkami (první parametr bude matice a druhým parametrem bude velikost matice). Aplikujte na naši matici mat1.
4. Napiš funkci vypisMatice, která vypíše matici (znovu dva parametry). Aplikuj na matici mat1.
5. Definujte čtvercovou matici znaků o velikosti n × n. Pojmenujte ji mat2.
6. Napiš funkci vlozZnaky2, která vyplní matici tak, že po obvodu budou hvězdičky a uvnitř bude znak tečka. Aplikuj na matici mat2.
7. Vypiš matici mat2.

1. Read the integer n = the size of the square matrix.
2. Define a square matrix of characters of size n × n. Name it mat1.
3. Write a function insertCharacters1, which fills the matrix with asterisks only (the first parameter will be the matrix and the second parameter will be the size of the matrix). Apply mat1 to our matrix.
4. Write the function ListMatrix, which prints the matrix (again two parameters). Apply to matrix mat1.
5. Define a square matrix of characters of size n × n. Name it mat2.
6. Write a function InsertCharacters2, which fills the matrix so that there will be asterisks around the perimeter and a character inside. Apply to matrix mat2.
7. Write the matrix mat2.
*/

//this the sollution for the mat[size][size] instead of mat[100][100]
void circuit_with_stars(int size,char mat[][size], int character);
void list_matrix(int size, char mat[][size]);
void init(int size, char mat[][size], char character);


int main()
{
    //1, 2
    int size;
    printf("Enter a size of matrix: ");
    scanf("%d", &size);

    char mat[size][size];
    char character;
    printf("Enter a character: ");
    scanf("\n%c", &character); // or "\n%c"

    //3, 4
    init(size, mat, character);
    list_matrix(size, mat);
    printf("\n");

    //5
    char mat2[size][size];

    //6
    circuit_with_stars(size, mat2, character);

    //7
    list_matrix(size, mat2);

    return 0;
}

void list_matrix(int size, char mat[][size])
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

void init(int size, char mat[][size], char character)
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

void circuit_with_stars(int size,char mat[][size], int character)
{
    int index;

    init(size, mat, '.');

    for(index=0; index < size;index++)
    {
        mat[0][index] = '*'; // frist line
        mat[size - 1][index] = '*'; // last line
        mat[index][0] = '*'; // first column
        mat[index][size - 1] = '*'; // last column
    }

    /*int i, j;
    for(i=0;i < size;i++)
    {
        for(j=0; j < size; j++)
        {
            if(mat[i][j] == mat[0][j] || mat[i][j] == mat[size - 1][j] || mat[i][j] == mat[i][0] || mat[i][j] == mat[i][size - 1])
                mat[i][j] = '*';
            else
                mat[i][j] = '.';
        }
    }*/
}
