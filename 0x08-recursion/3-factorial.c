#include "main.h"

/**
 * factorial - Calculates the factorial of a given number.
 * @n: The number for which factorial is to be calculated.
 *
 * Return: The factorial of the given number.
 */
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main(void)
{
   int n num = 4;
    printf("Factorial of %u is %u\n", num, factorial(num));
    return 0;
}

