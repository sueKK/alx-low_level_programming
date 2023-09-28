#include "main.h"

/**
 * get_bit - This function returns the value of a bit
 * @z: number to search
 * @index: the index of the bit
 *
 * Return: this is the value of the bit
 */

int get_bit(unsigned long int z, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (z >> index) & 1;

	return (bit_val);
}

