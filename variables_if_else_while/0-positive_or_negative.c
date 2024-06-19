#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n < 0)
		printf("number is negative\n", n);

	else if (n > 0)
		printf("number is positive\n", n);
	
	else
		printf("number is zero\n", n);
	
	return 0;
}
