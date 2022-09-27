#include "main.h"
/**
 * print_diagonal - function
 * @n: number of times the character '\'.
 * x: variable, number of spaces.
 * y: variable, number of slash.
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
				_putchar(' ');
			_putchar('\\');

			_putchar('\n');

		}
	}

	_putchar('\n');
}
