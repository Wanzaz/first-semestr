#include <stdio.h>

void retrieve_are(int a[], int n) //n = current size of area, a[] = maximal size of area
{
  int i;
  for(i=0;i<POCET;i+++)
  {
    printf("Enter %d. element of area: ", i + i);
    scanf("%d", &a[i]);
  }
  return 0;
}

int main()
{
  return 0;
}
