#include <stdio.h>

/*vektor udava smer
u=(3,-1)
v=(1, 0)
u * v = (3*1 + (-1) * 0) = 3
*/


int vektor(int pole1[], int pole2[], int n)
{
  int i, soucin=0;
  for(i=0;i<n;i++)
  {
    soucin += pole1[i] * pole2[i] //soucin = soucin + pole1[i]*pole2[i]
  }
  return soucin;
}


int main(
{
  return 0;
}
