#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return:  converted digit
 */

unsigned int binary_to_uint(const char *b)
{
	int t;
	unsigned int number = 0;

	if (!b)
		return (0);

	for (t = 0; b[t]; t++)
	{
		if (b[t] < '0' || b[t] > '1')
			return (0);
		number = 2 * number + (b[t] - '0');
	}

	return (number);
}
