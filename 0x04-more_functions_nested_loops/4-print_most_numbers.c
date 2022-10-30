#include "main.h"

/**
 * print_most_numbers - Function than prints 0-9 except 2 & 4
 *
 * Description: as mentioned above
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int x;

	for (x = '0'; x < '10'; x++)
	{
		if (!(x == '2' || x == '4'))
			_putchar(x);

	}
	_putchar('\n');

