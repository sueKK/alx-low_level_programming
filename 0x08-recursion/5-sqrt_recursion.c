#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 *_sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which the natural square root is to be calculated.
 *main - Entry point of the program
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

/**
 * main - Entry point of the program.
 */

int main(void)
{
double number = 25.0;
double sqrt_result = _sqrt_recursion(number);

if (sqrt_result > == 0)
	printf("Natural square root of %.2f is %.2f\n", number, sqrt_result);

	return (0);
}
