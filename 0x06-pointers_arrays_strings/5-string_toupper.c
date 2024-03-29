#include "main.h"

/**
 * string_toupper - changes all lower case character to upper case
 * @str: character
 * Return: returns a character (str)
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index++])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}

	return (str);
}
