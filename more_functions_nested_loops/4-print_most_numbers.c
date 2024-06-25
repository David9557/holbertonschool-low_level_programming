#include "main.h"

/**
* print_numbers - print 0 to 9, exept 2 and 4
*/

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')

		_putchar(c);
	}
	_putchar('\n');
}
