#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - If true the answer will be positivE
 *elseif can be negative or zero
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);/* your code goes there */
	}
	else if (n == 0)
	{
		printf("%d is Zero", n);
	}
	else
	{	printf("%d is Negative", n);
	}
	return (0);
}
