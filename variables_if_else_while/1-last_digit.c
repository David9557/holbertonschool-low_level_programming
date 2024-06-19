#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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

	if (n < 6)
		strcmp("%c and is less than 6 and not 0\n", n);
	else if (n > 5)
		strcmp("%c and is greater than 5\n", n);
	else
		strcmp("%c and is 0\n", n);
	return (0);
}
