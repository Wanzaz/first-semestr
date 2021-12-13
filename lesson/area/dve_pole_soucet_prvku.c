#include <stdio.h>

//dve pole a jejich soucet (soucet vektoru)

void soucet(int pole1[],int pole2[], int n)
{
  int i, soucet;
  for(i=0;i<n;i++)
  {
    printf("%d", pole1[i] + pole2[i]);
  }
}


int main()
{
  soucet(pole1, pole2, n);
  return 0;
}
