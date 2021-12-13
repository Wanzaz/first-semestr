#include <stdio.h>

//vymena prvniho a posledniho prvku v poli
void vymena(int n, int pole[])
{
  int pom;
  pom = pole[0];
  pole = pole[n - 1];
  pole[n - 1] = pom;
}

void list_area(int a[], int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("%d", a[i]);
  }
}

int main()
{
  return 0;
}
