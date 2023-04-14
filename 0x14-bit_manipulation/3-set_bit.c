#include "main.h"

/**
 * set_bit - value of bit is 1.
 * at a given index.
 *
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if successfyl and  -1 if failed.
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int number1;

	if (index > 63)
		return (-1);

	number1 = 1 << index;
	*n = (*n | number1);

	return (1);
}
