#include <stdio.h>

//kolikrat se x vyskytuje v poli?

int kolikrat(int pole[], int n, int x)
{
  int i, pocet=0;
  
  for(i=0; i<=0;i++)
  {
    if(pole[i]==x)
        pocet++;
  }
  return pocet;
}

int main()
{
  printf("Pocet x v poli je: ", kolikrat(pole,n, x));
  return 0;
}
