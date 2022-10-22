#include "main.h"

/**
 * print_most_numbers - prints 0-9 excluding 2 & 4
 *
 *Return: void
 */

int void print_most_numbers(void)
{
	int i;

	for (i = 0, i <= 9, i++)
	{
		if (i == 2 || i == 4)
			;
		else
			_putchar(i);
	}

	_putchar('\n');
}
