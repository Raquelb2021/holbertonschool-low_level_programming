#include "main.h"
/**
 * print_square - The function
 * @size: is the size of the square.
 * a: the integer - spaces for the square
 * b: the integer - lines for the square
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			_putchar('#');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
