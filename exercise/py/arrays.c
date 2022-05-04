#include <stdio.h>
#include <stdlib.h>

void print(int a[], int n);
void fill(int a[], int n);

int main()
{
	int a[100];
	int n=50;
	fill(a, n);
	print(a, 2*n);
}

void fill(int a[], int n)
{
	int index;
	for(index=0;index<n;index++)
		a[index] = index + 1;

	int i;
	for(i=n;i >= 0;i--)
	{
		a[index] = i - 1;
		index++;
	}
}

void print(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ", a[i]);
}
