#include "main.h"
/**
 *_puts_recursion - Prints a string followed by a new line
 * Return: return 1
 * @s: is a string
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);

		_puts_recursion(s + 1);
}
