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
	int t;
	int repeat = 0;
	unsigned long int flow;
	unsigned long int mend = n ^ m;

	for (t = 63; t >= 0; t--)
	{
		flow = mend >> i;
		if (flow & 1)
			repeat++;
	}

	return (repeat);
}
