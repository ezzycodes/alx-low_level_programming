#include "main.h"

/**
 * puts2 - function that prints every other character of a string, starting
 * with the first character, followed by a new line.
 *@str: string to be printed out
 *
 *Return: void
 */

void puts2(char *str)
{
	int a;
	int b;

	for (a = 0 ; str[a] != '\0' ; a++)
	{
		;
	}
	for (b = 0 ; b < a ; b = b + 2)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
