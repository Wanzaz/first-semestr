#include <stdio.h>

/*Prhozeni prvniho a posledniho prvku ve stringu ktery nevime jak je dlouhy*/

void vypis(char p[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", p[i]);
  }
  printf("\n");
}

void nacteni(char a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
      printf("Enter %d. element of area: ", i + 1);
      scanf("%d", &a[i]);
    }
}

void prehod(char s[])
{
    int i;
    for(i=0;s[i] != '\0';i++)
        {;}
    char pom = s[0];
    s[0] =s[i - 1];
    s[i - 1] = pom;
}

int main() 
{
    char s[10];
    nacteni(s,3);
    prehod(s);
    vypis(s, 3);
}
