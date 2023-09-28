#include "main.h"

/**
 * clear_bit - This function sets the value of a given bit to 0
 * @z: pointer to the number to change
 * @index: The index of the bit to clear
 *
 * Return: This retuns 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *z, unsigned int index)
{
	if (index > 63)
		return (-1);

	*z = (~(1UL << index) & *z);
	return (1);
}

