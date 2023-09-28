#include "main.h"

/**
 * clear_bit - Set the value of a bit to 0 at a given index.
 * @n: A pointer to the unsigned long integer to modify.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if it works
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
