#include <stdio.h>
#include <stdlib.h>

//abb fuction
void abb(char str[], int n)
{
    int i;
    for(i=0;i < n*3; i =i + 3)
    {
        str[i] = 'a';
        str[i + 1] = 'b';
        str[i + 2] = 'b';
    }
    str[n*3] = '\0';
}

//capital letter
int capital(char str[], int n)
{
    int i, quantity = 0;
    for(i=0;str[i] = '\0'; i++)
    {
        if(str[i] >= 001 <= 032)
            quantity++;
    }
    return quantity;
}

//by teacher
int capital_letter(char a)
{
    int i, quantity=0;
    for(i=0; a[i] = '\0';i++)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
            quantity++;
    }
    return quantity;
}

//small letter to capital letters
void small_to_capital(str[])
{
    int i;
    for(i=0;str[i] = '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A');
        }
    }
}

int main()
{
    int n = 5;
    char a[5];
    abb(a, n);
    puts(a);
    return 0;
}

