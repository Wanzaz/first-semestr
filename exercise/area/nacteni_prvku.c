#include <stdio.h>

void retrieve_area(int a[], int n) //n = current size of area, a[] = maximal size of area
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("Enter %d. element of area: ", i + 1);
    scanf("%d", &a[i]);
  }
}

int main()
{
  return 0;
}
