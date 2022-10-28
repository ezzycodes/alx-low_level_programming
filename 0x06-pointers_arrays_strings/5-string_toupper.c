#include "main.h"

/**
 * string_toupper - changes all lower case character to upper case
 * @str: character
 * Return: Always 0.
 */
char *string_toupper(char *str)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
