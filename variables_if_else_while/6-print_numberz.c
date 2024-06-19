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
	int ch;

	for (ch = 0 ; ch <= 9 ; ch++)
	{
	putchar('0' + ch);
	}

	putchar('\n');

	return (0);
}
