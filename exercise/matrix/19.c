#include <stdio.h>
#include <stdlib.h>
#include  <time.h>

/*
CZ:
1. Stáhněte si kód do nového projektu, spusťte ho a prostudujte.
2. Definujte matici celých čísel o velikosti 100 ×100. Vyplňte ji náhodnými čísly a vytiskněte ji.
3. Napište funkci, která z obdélníkové matice n×m vrátí její aritmetický průměr. Aplikujte na vaši matici.
4. Napište funkci, která vrátí největší číslo z matice. Aplikujte na vaši matici.
5. Napište funkci, která vytiskne pro každý řádek matice součet čísel na řádku. Aplikujte na vaši matici.
6. Napište funkci, která do matice přidá nový řádek na konec a uloží do něj největší čísla ze sloupců.
Aby to šlo, musíte upravit načítání počtu řádků ve funkci main. Aplikujte na vaši matici a pak ji vytiskněte.

EN:
1. Download the code for a new project, run it and study it.
2. Define a matrix of integers measuring 100 × 100. Fill it with random numbers and print it.
3. Write a function that returns its arithmetic mean from a rectangular matrix n × m. Apply to your matrix.
4. Write a function that returns the largest number from the array. Apply to your matrix.
5. Write a function that prints the sum of the numbers on the line for each row of the matrix. Apply to your matrix.
6. Write a function that adds a new row to the end of the array and stores the largest numbers from the columns.
For this to work, you need to adjust the number of rows in the main function. Apply to your matrix and then print it.
*/

void init_random(int mat[][100], int n, int m);
void list(int mat[][100], int n, int m);
int average(int mat[][100], int n, int m);
int largest_number(int mat[][100], int n, int m);
void print_average_on_row(int mat[][100], int n, int m);
void add_element_largest_in_column(int mat[][100],int n,int m);

int main()
{
    srand( (unsigned) time(NULL));
    int n, m;
    printf("Zadej pocet radku matice: ");
    scanf("%d", &n);
    while (n < 1 || n > 99)
    {
        printf("Cislo musi byt mezi 1 a 100: ");
        scanf("%d", &n);
    }
    printf("Zadej pocet sloupcu matice: ");
    scanf("%d", &m);
    while (m < 1 || m > 99)
    {
        printf("Cislo musi byt mezi 1 a 100: ");
        scanf("%d", &m);
    }

    //here is the code
    //1, 2
    int mat[100][100];
    init_random(mat, n, m);
    list(mat, n, m);

    //3
    printf("The average of matrix is %d", average(mat, n, m));

    //4
    printf("\nThe largest number of matrix is %d\n", largest_number(mat, n, m));

    //5
    print_average_on_row(mat, n, m);
    printf("\n");

    //6
    add_element_largest_in_column(mat, n, m);
    n++;
    list(mat, n, m);

    printf("\n I am done with matrix ...");
    return 0;
}


void init_random(int mat[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            mat[i][j] = rand() % 50 - 25;
    }
}

void list(int mat[][100], int n, int m)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%4d", mat[i][j]);
        printf("\n");
    }
}

int average(int mat[][100], int n, int m)
{
    int i, j, av;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            av += mat[i][j];
    }
    return av/(m*n);
}

int largest_number(int mat[][100], int n, int m)
{
    int i, j, largest_number;
    largest_number = mat[0][0];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(largest_number < mat[i][j])
            {
                largest_number = mat[i][j];
            }
        }
    }
    return largest_number;
}

void print_average_on_row(int mat[][100], int n, int m)
{
    int i, j, count=0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            count += mat[i][j];
        }
        printf("The sum on %d. row is %d\n",i, count);
        count = 0;
    }
}


/*6. Napište funkci, která do matice přidá nový řádek na konec a uloží do něj největší čísla ze sloupců.
Aby to šlo, musíte upravit načítání počtu řádků ve funkci main. Aplikujte na vaši matici a pak ji vytiskněte.*/

//i and j has changed because we are going through the matrix in different style
void add_element_largest_in_column(int mat[][100],int n,int m)
{
    int i, j, max;

    for (j = 0; j < m; j++)
    {
        max = mat[0][j];

        for (i = 0; i < n; i++)
        {
            if(mat[i][j] > max)
                max = mat[i][j];
        }
        mat[n][j] = max;
    }
}

