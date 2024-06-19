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
	char ch;

	for (num = '0'; num <= '9'; num++)
	for (ch = 'a'; ch <= 'f'; ch++)
	{
	putchar(ch);
	}

	putchar('\n');

	return (0);
}
