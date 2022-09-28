#include "main.h"
/**
 * print_rev - Print the string, in reverse.
 * @s: string
 */
void print_rev(char *s)
{
	int i;

	while (i < *s)
	{
		_putchar(*s);
		i++;
		s--;
	}
	_putchar('\n');
}
