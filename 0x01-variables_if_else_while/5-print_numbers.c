#include <stdio.h>

/**
 *main - prints all the numbers from 0-9
 *
 *Return: always 0 (succes)
 */

int main(void)
{
	int numbers;

	for (numbers = 0 ; numbers < 10 ; numbers++)
		printf("%d", numbers);
	printf("\n");
	return (0);
}
