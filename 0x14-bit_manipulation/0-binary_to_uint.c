#include "main.h"

/**
 * binary_to_unit function convets binary to digit
 * @b has a string containing the binary
 * return is the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int t;
	unsigned in number = 0;
	if (!b)
		return (0);

	for (t = 0; b[i]; t++)
	{
		if (b[t] < '0' || b[t] > '1')
			return (0);
		number = 2 * number + (b[t] - '0');
	}
	return (number);
}
