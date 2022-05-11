#include <ctype.h>
#include <stdio.h>

int count_spaces(char a[]);

int main()
{
	char a[101];
	printf("Enter a sentence: ");
	scanf("%100[^\n]", a);
	int count = count_spaces(a);

	printf("The amount of white spaces is %d \n", count);
	return 0;
}

int count_spaces(char a[])
{
	int i=0, n=0;
	while (a[i] != '\0') {
		if(a[i] == ' ' && a[i+1] != ' ')
			n++;
		i++;
	}
	return n+1;
}
