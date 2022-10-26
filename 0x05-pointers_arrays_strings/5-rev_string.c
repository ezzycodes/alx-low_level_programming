#include "main.h"

/**
 *rev_string -  a function that reverses a string.
 *@s: string that needs to be reversed
 *
 *Return: void
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char str[5000];

	while (*(s + i))
	{
		*(s + i) = *(str + j);
		j++;
		i--;
	}
}
