#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void delete_first_element(char source[])
{
    int i;
    for(i=0;source[i] != '\0';i++)
    {
        source[i] = source[i + 1];
    }
}

void fill(char str[], int n)
{
    for (int i = 0; i < n; i++)
    {
        str[i] = 'a';
    }
    for (int i = n; i < n*2; i++)
    {
        str[i] = 'b';
    }

    str[n*2] = '\0';
}

// by teacher
void fill2(char str[], int n)
{
    for (int i = 0; i < n; i++)
    {
        str[i] = 'a';
        str[i + n] = 'b';
    }

    str[n*2] = '\0';
}


void cross(char str[], int n)
{
    int i;
    for(i=0;i < n*2;i++)
    {
        if(i%2==0) str[i] = 'a';
        else str[i] = 'b';
    }
    str[i+1] = '\0';
}

// by teacher
void cross2(char str[], int n)
{
    int i;
    for(i=0;i < n*2;i++)
    {
    str[i] = 'a';
    str[i + i] = 'b';
    }
    str[i+1] = '\0';
}

int main()
{
    //callling the delete_first_element function
    char str[10] = "abcd";
    delete_first_element(str);
    puts(str);

    //calling the fill function
    int n;
    printf("Enter n number: ");
    scanf("%d", &n);
    fill(str, n);
    puts(str);

    //calling the cross function
    cross(str,n);
    puts(str);

    // thoughts about caeser cipher 
    //char str[] = "abc";
    //encrypt(str, 1); // "bcd"
    //decrypt(str, 1); // "abc"

    return 0;
}

