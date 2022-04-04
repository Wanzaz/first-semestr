#include <stdio.h>
#include <stdlib.h>

// constants of numbers
enum mistakes{ok=-2, problem0=5, problemFile}; // always minus one

int main()
{
	int number;
	printf("Mistake is %d\n", problemFile);
	printf("Enter a denominator: ");
	scanf("%d", &number);
	if(number==0)
		return problem0;

	printf("fracture 1/%d = %f", number, 1.0/number);
	return ok;
}
