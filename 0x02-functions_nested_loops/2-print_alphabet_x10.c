
#include "main.h"
/**
* print_alphabet_x10 - Prints the alphabet 10 times.
*
* Return: success (0)
*/
void print_alphabet_x10(void)
{
	int i, b;

		for (i = 0; i <= 9; i++)
	{
		for (b = 97; b <= 122; b++)
	{
		_putchar(b);
	}
		_putchar('\n');
	}
}

