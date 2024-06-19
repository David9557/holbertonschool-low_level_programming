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
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	
	for (ch = 'A'; ch <= 'Z'; ch++)
	
	{
	putchar(ch);
	}

	putchar('\n');

	return (0);
}


