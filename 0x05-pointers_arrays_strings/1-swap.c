#include "main.h"

/**
 * swap_int - a function that swaps values of intergers"
 *
 *@a: first interger to be swapped
 *@b: 2nd interger to be swapped
 *
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
