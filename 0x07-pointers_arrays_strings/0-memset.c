#include "main.h"
/*memset fills a block of code with certian values
 * i think its nice working with pointers
 *cool
 *happy coding 
 */
char *_memset(char *s, char b, unsigned int n);
{
	int i;
	i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
