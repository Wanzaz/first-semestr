#include <stdio.h>
#include <stdlib.h>

// constants of numbers
enum mistakes{ok=-2, problem0=5, problemFile}; // always minus one

typedef 
enum {
	BLACK,
	RED,
	BLUE,
	GREEN,
	WHITE,
} TColor;

int main()
{
	TColor color;
	color = 3;
	int number;
	if (color==GREEN)
		printf("OK\n");

	printf("Red is %d\n", RED);
}
