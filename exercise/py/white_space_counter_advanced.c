#include <ctype.h>
#include <stdio.h>

// isspace() function
int cnt_space(int i, int count, char ch)
{
	char buf[50] = "Test for testing, there are also two  spaces";
	ch = buf[0];

	while (ch != '\0') {
		ch = buf[i];
		if (isspace(ch))
			count++;

		i++;
															}
	return (count);
}

int main()
{
	char ch;
	int i = 0, count = 0;

	count = cnt_space(i, count, ch);

	printf("\nNumber of spaces in the sentence is : %d \n", count);

	return 0;
}
