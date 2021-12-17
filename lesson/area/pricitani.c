#include <stdio.h>


void pructeni(int pole[], int n, int x)
{
  int i;
  for(i=0;i<n;i++)
  {
    pole[i]=x+5*i;
  }
}

/*
pole[0]=x;
for(i=1;i<n;i++)
{
  pole[i]=5+pole[i - 1]
}
 */

int main()
{
  return 0;
}
