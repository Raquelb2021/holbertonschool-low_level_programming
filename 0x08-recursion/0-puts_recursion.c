#include "main.h"
/**
 *
 *
 *
 */
void _puts_recursion(char *s)
{
	if (*s == 1)
	{
		_putchar('\n');
	}

	_putchar(*s);

	_puts_recursion(s + 1);

}
