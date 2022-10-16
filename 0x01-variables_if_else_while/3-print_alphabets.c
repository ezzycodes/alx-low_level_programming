#include <stdio.h>
/**
 *main - a program that prints the alphabet in lowercase, and then in uppercase
 *
 *
 *Return: always 0 (success)
 */

int main(void)
{
	char lowerLetter;
	char upperLetter;

	for (lowerLetter = 'a'; lowerLetter <= 'z'; lowerLetter++)
		putchar(lowerLetter);
	for (upperLetter = 'A'; upperLetter <= 'Z'; upperLetter++)
		putchar(upperLetter);

	putchar('\n');

	return (0);

}
