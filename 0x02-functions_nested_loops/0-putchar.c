#include "main.h"

/**
 * main -header file that  prints _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 means (Success)
 */

int main(void)
{
	char text[9] = "_putchar";
	int j = 0;

	for (j = 0; j < 8; j++)
	{
		_putchar(text[j]);
	}
	_putchar('\n');

	return (0);
}
