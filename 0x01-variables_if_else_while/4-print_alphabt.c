#include <stdio.h>

/**
 *main - prints all the letters of the alphabet
 *in lower cases excluding "e" and "q"
 *
 *Return: always 0 (success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
