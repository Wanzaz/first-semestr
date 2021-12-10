#include <stdio.h>
#define POCET 10

//the elements of the area are never set to zero until you do that

int main()
{
  int i, pole[POCET];
  for(i=0;i<POCET;i++)
  {
    pole[i] = 0;
  }
  return 0;
}

/*
or we use a definition with initialization
int pole [POCET] = {0,0,0,0,0,0,0,0,0,0};
*/
