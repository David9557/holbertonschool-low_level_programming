#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Assigns a random number prints the last digit of n
 * and whether it is greater than 5, is 0, or is less than 6 and not 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0)); /* Seed the random number generator */
	n = rand() - RAND_MAX / 2; /* -RAND_MAX/2 and RAND_MAX/2 */
	last_digit = n % 10; /* Calculate the last digit of n */

	printf("Last digit of %d is %d and is ", n, last_digit);

	if (last_digit > 5)
	{
		printf("greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}
