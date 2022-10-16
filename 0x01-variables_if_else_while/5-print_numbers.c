#include <stdio.h>

/**
 *main - prints all the numbers from 0-9
 *
 *Return: always 0 (succes)
 */

int main(void)
{
	int numbers;

	for (numbers = '0' ; numbers <= '9'; numbers++)
		printf("%d \n", numbers);
	return (0);
}
