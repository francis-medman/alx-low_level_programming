#include "main.h"

/**
 * get_endianness - Check the endianness of the system.
 *
 * Return: 0 if big-endian, 1 if little.
 */
int get_endianness(void)
{
	unsigned int check = 1;
	char *byte = (char *)&check;

	return (*byte);
}
