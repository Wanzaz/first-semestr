#include <stdio.h>

void vypis_opacne_pole(int pole[], int n) //teacher
{
  int i;
  for(i=n-1;i>=0;n--)
  {
    printf("%d ", pole[i]);
  }
}

void vypis_opacne(int pole[], int n) //micka
{
  int i;
  for(n=n-1;n>0;n--)
  {
    printf("%d ", pole[i]);
  }
}

int main()
{
  vypis_opacne(pole, n);
  vypis_opacne_pole(pole, n);
  return 0;
}
