#include "main.h"

/**
 * get_bit - function tgata gets bit
 * @n: number to search
 * @index: index of the bit
 *
 * Return: the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int digit;

	if (index > 63)
		return (-1);

	digit = (n >> index) & 1;

	return (digit);
}
