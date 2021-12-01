#include <stdio.h>
#include <stdlib.h>


/*rekurze postupne vnoruje aa zacne vracet cisla od te posledni zavolane funkce (a pak pracuje od return 1) a pak se vynori*/
int recursion(int x)
{
    if(x==0)
        return 1;

    return 2 * recursion(x -1) +1; //2*(2*(2*1+1)+1)+1
}



long long int factorial(int y) //long long je pouzito kvuli aby se mohlo pracovat s vetsimi soubory
{
    if(y==0)
        return 1;

    return y * factorial(y -1);
}



/*Fibonnaciho cisla:
f(1) = 1
f(2) = 1
f(n) = f(n - 1) + f(n -2)
          n>2 */
long long int fibonacci(int n)
{
    if(n==1 || n==2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n -2);
}



long long int fibonacci_cycle(int z)
{
    int p1=1, p2=1, v;

    if(z==1)
    {
        printf("1");
        return 1;
    }

    if(z==2)
    {
        printf("1, 1");
        return 1;
    }
    printf("1, 1, ");
    for(int i=3;i<=z;i++)
    {
        v = p1 + p2; //34
        p1 = p2;     //21
        p2 = v;       //34
        printf("%d, ", v);
    }

    return v;
}


int Fib3(int res)
{
    int ps1=0, ps2=1, i;

     for(int i=3;i<=res;i++)
    {
        printf("%d", ps2);
        ps2 = ps2 + ps1;
        ps1 = ps2 - ps1;
    }
    return ps1;
}

int NSD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return NSD(b, a%b);
    }
}


int main()
{
    int y, x, n, z, res, a, b;
    printf("Enter a number for factorial: \n");
    scanf("%d", &y);
    printf("Enter a number for fibonacci sequence: \n");
    scanf("%d", &n);
    printf("Enter a number for cycle fibonacci sequence: \n");
    scanf("%d", &z);
    printf("Enter a number for fibonacci sequence Fib3: \n");
    scanf("%d", &res);
    printf("Enter a number for NSD: \n");
    scanf("%d", &a);
    printf("Enter b number for NSD: \n");
    scanf("%d", &b);

    printf("Factorial of number %d is %lld\n", y, factorial(y));
    printf("The result is  %d \n", recursion(4));
    printf("Fibonacci sequence number of %d is %lld\n", n, fibonacci(n));
    printf("Fibonacci sequence number of %d is %lld\n", z, fibonacci_cycle(z));
    printf("Fibonacci sequence number Fib3 of %d is %lld\n", z, Fib3(res));
    printf("NSD is %d\n", NSD(a, b));

    return 0;
}
