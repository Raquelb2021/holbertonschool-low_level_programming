#include "main.h"
/**
 * print_line - Draws a straight line in he terminal.
 * line: is the variable.
 * @n: The number of times the character '_'.
 *
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)

			_putchar('_');
	}
	_putchar('\n');
}

