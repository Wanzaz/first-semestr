#include <stdio.h>
#include <stdlib.h>
#define MAX 6


//funkce pro vypis matice slouzi pouze pro ladeni, ve vyslednem kodu neni potrebna
void list_matrix(char mat[][MAX])
{
    for(int i=0; i<MAX; i++)
    {
        for(int j=0; j<MAX; j++)
        {
            printf("%c",mat[i][j]);
        }
        printf("\n");
    }
}

void swap(char mat[][MAX])
{
    char help;
    int i, j;
    for(i=0; i<MAX; i++)
    {
        for(j=0; j<i; j++)
        {
            help = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = help;
        }
    }
}

void copy(int rows, int cols, char mat[][cols], char str[])
{
    int i, j, index=0;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            str[index] = mat[i][j];
            index++;
        }
    }
    str[index] = '\0';
}

void decrypt(int rows, int cols, char str[])
{
    int i;
    for(i=0;str[i] != '\0';i++)
    {
        switch (str[i])
        {
        case '*': str[i] = 'A';
            break;
        case '+': str[i] = 'E';
            break;
        case 'Q': str[i] = 'I';
            break;
        case '-': str[i] = 'O';
            break;
        case '?': str[i] = 'U';
            break;
        default:
            break;
        }
    }
}


int main(void) {
    printf("Zasifrovana zprava\n");
    //char matice[MAX][MAX] = {{'K',' ','T','L','G',' '}, {'D','M','*','-','L',' '}, {'-','-',',',' ','Q',' '}, {' ','C',' ','G','.',' '}, {'S',' ','M','-','.',' '}, {'+','P','*','-','.',' '}};
    //char matice[MAX][MAX] = {{'C','N','J','Q','F','-'}, {'-','+','+','S','*','K'}, {' ','Z',' ',' ','C',' '}, {'T','*','N','N','+',' '}, {'+','B','*','*','B',' '}, {' ','Q','P',' ','-',' '}};
    char mat[MAX][MAX] = {{'B','N',' ',' ','    ','!'}, {'+','+','*','S','N','!'}, {'Z','Z','P','T','+','!'}, {' ',' ','P','-','L','!'}, {'P','D','L','R','+','!'}, {'+','-','+','?','Z','!'}};

    //tady dopln kod
    list_matrix(mat);
    printf("---------------------------\n");

    //napis funkci, ktera v matici vymeni radky a sloupce, aplikuj na nasi matici
    swap(mat);
    list_matrix(mat);
    printf("---------------------------\n");

    //definuj textovy retezec o vhodne velikosti (ma se tam vlezt cela matice MAX × MAX).
    char str[MAX*MAX+1];

    //napis funkci, ktera vezme matici a retezec a zkopiruje po radcich matici do retezce.
    copy(MAX, MAX, mat, str);
    printf("%s", str);
    printf("\n---------------------------\n");

    //napis funkci, ktera vezme retezec a vymeni v nem znaky: * -> A, + -> E, Q -> I, - -> O, ? -> U
    //pouzij pritom prikaz switch!!!!!
    decrypt(MAX, MAX, str);

    //vypis retezec, pokud jsi vse udelal spravne, ceka te vtipna hlaska
    printf("%s", str);

    //aktualni matici si zapoznamkuj a odpoznamkuj jinou, ceka te dalsi vtipna hlaska



    return 0;
}
