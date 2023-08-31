#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 *_sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which the natural square root is to be calculated.
 *
 * Return: The natural square root of the given number.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
	fprintf(stderr, "Error: Cannot calculate square root if negative.\n");
{
	return (-1.0);
}
}
{
	return (_sqrt_recursion(n));
}
}
