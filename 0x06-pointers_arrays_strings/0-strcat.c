#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: pointer to evaluate
 * @src: pointer to evaluate
 * Return: void
*/

char *_strcat(char *dest, char *src)
{
	int x;
	int b;

	x = 0;
	while (dest[x] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[x] = src[b];
		x++;
		b++;
	}
	dest[x] = '\0';
	return (dest);
}
