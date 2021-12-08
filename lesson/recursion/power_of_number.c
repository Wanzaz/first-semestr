#include <stdio.h>

//mocnina cisla pomoci rekurze
//x na ntou


long long int recursion(int x, int n)
{
  if(n==0)
      return 1;
  return x * recursion(x, n -1);
}


int main()
{
  int x, n;
  printf("Enter the number x: ");
  scanf("%d", &x);
  printf("Enter the power of number x: ");
  scanf("%d", &n);
  
  printf("The result is %lld", recursion(x, n));
  return 0;
}
