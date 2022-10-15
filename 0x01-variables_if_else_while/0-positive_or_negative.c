#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
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
		printf("The number is Positive %d", n);/* your code goes there */
		else if (n == 0)
		{
			printf("The number is Zero %d", n);
			else
			{	printf("The number is Negative %d", n);
	return (0);
}
