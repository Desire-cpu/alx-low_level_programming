#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you
 *             would need to flip to get from one number to
 *             another
 *
 * @n: decimal number
 * @m: the other decimal number
 *
 * Return: number of bits to flip to get @m from @n
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit_value;

	for (bit_value = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bit_value++;
	}

	return (bit_value);
}
