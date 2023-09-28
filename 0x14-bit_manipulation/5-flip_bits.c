#include "main.h"

/**
 * flip_bits - This function counts the number of bits to change
 * to get from one number to another
 * @z: This is first number
 * @m: The second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int z, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = z ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}

