#include <stdio.h>
#include <stdlib.h>

/*Fibonnaciho cisla: 
f(1) = 1
f(2) = 1
f(n) = f(n - 1) + f(n -2)
          n>2 */


long long int fib(int n)
{
    if(n < 3)
        return 1;
    return fib(n - 1) + fib(n -2);
} 

int main()
{
    int n;
    printf("Zadej cislo: ");
    scanf("%lld", &n);
    printf("%lld", fib(n));
    return 0;
}
