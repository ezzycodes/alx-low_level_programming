#include <stdio.h>

/**
 *main - writting the alphabet in reverse
 *
 *Return: always 0 (success)
 */

int main(void)
{
	char r_Alpha;

	for (r_Alpha = 'z'; r_Alpha >= 'a'; r_Alpha--)
		putchar(r_Alpha);
	putchar('\n');

	return (0);
}
