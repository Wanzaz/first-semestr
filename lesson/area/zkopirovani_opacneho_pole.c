#include <stdio.h>

void kopie_opacne_pole(int pole[],int pole2[], int n)
{
  int i;
  for(i=n;i<0;n++)
  {
    pole2[i]=pole1[n-1-i];
  }
}

int main()
{
  return 0;
}
