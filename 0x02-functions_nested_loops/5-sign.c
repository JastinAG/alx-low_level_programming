#include "main.h"

/**
 * functions that prints sign of a number
 *returns 1 and prints + if n > 0
 * returns zero and prints zero if n = 0
 * returns -1 and prints -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
		{
		_putchar(43);
	return (1);
		}
	else if (n < 0)
		{
		_putchar(45);
	return (-1);
		}
	else
		{
			_putchar(48);
	return (0);
		}
		_putchar('\n');
}

