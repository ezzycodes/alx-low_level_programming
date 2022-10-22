#include "main.h"

/**
 * _isdigit - function that checks for a digit 0-9
 *
 *@c: checks for the character entered
 *
 *Return: 1 if success else 0
 */

int _isdigit(int c)
{
	i = 0;

	if (c >= 0 && c <= 9)
		i = 1;

	return (i);

}
