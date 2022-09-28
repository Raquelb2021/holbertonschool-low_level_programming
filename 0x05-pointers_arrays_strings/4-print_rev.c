#include "main.h"
#include <string.h>
/**
 * print_rev - Print the string, in reverse.
 * @s: string
 */
void print_rev(char *s)
{
	int a = 0, b;

	while (s[b++])
	{
		a++;

	for (b = a - 1; b >= 0; b--)

		_putchar(s[b]);
	}

	_putchar('\n');
}
