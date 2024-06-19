#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase followed by a new line.
 * Only the putchar function is used, and only twice in the code.
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int num;

	for (num = 0; num <= 9; num++)
{
	putchar(num + '0');
	if (num != 9)
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');

	return (0);
}
