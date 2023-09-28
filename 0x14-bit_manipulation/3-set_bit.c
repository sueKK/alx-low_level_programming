#include "main.h"

/**
 * set_bit - This function sets a bit at a given index to 1
 * @z: The pointer to the number to change
 * @index: The index of the bit to set to 1
 *
 * Return: This returns 1 for success, -1 for failure
 */
int set_bit(unsigned long int *z, unsigned int index)
{
	if (index > 63)
		return (-1);

	*z = ((1UL << index) | *z);
	return (1);
}

