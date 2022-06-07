#include "main.h"

/**
 * main - prints _putchar
 *
 * Description: this program prints _putchar
 *
 * Return:  0 means  (Success) thats i have used it
 */

int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
