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
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
