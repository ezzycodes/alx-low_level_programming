#include "main.h"

/**
 * _memset - function copies n bytes from memory area src to memory area dest
 * @s: source string
 * @b: the contant byte for filling
 * @n: lenght of buffer
 * Return: new string.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;

	}
	return (s);
}
