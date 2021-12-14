#include <stdio.h>

void vloz(int a[], int n)
{
  int i, x;
  for(i=0,i<n,i++)
  {
    printf("Zadej parametr");
    scanf("%d", &x);
    a[i]=x;
  }
}

int main()
{
  int a[10], n;
  vloz(a, n);
  return 0;
}
