#include <unistd.h>

/**
 * putchar writes c to stdout
 * @c char print
 * return 1 on sucess.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
