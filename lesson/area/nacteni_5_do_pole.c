#include <stdio.h>

//vloz do vsech prvku pole na 5

void vloz_petky(int a[], int n)
{
  int i;
  for(i=0,i<n,i++)
  {
    a[i]=5;
  }
}

int main()
{
  vloz_petky();
  return 0;
}
