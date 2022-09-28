#include "main.h"
#include <string.h>
/**
 * print_rev - Print the string, in reverse.
 * @s: string
 */
void print_rev(char *s)
{
	int a = 0;
		
		while (*(s + a))
		
			a++;
		a = a - 1;

		while (a >= 0)
		{
			_putchar(*(s + 1));
			a--;
		}
		_putchar('\n');
}
