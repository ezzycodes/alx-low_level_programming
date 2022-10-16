#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  This program will assign a random number to the variable
 * and the code will compare with if statements
 * lastD is the last digit of a given number
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int lastD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastD = n % 10;

	if (lastD >= 6)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastD);
	}
	else if (lastD == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastD);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastD);
	}
	return (0);
}
