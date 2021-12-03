#include <stdio.h>

//kopírování a porovnávání pole

int main()
{
  int i, pole1[10], pole2[12];
  
  for(i=0;i<10;i++)
  {
    pole1[i] = pole2[i];
  }
  //or
  
  for(i=0;i<10;i++)
  {
    if(pole1[i] != pole2[i])
      break;
  }
  return 0;
}
