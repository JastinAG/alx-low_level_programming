#include <stdio.h>

/**
 *main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char acharacter;
	int ainterger;
	long along;
	long long alonglong;
	float afloat;

	printf("size of a char: %lu byte(s)\n)", sizeof(acharacter));
	pritf("size of an int: %lu byte(s)\n)", sizeof(ainterger));
	printf("size of a long int: %lu byte(s)\n)", sizeof(along));
	printf("size of a long long int: %lu byte(s)\n)", sizeof(alonglong));
	printf("size of a float: %lu byte(s)\n", sizeof(afloat));

	return (0);
}

