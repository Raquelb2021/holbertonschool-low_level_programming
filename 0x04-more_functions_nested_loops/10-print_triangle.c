#include "main.h"
/**
 * print_triangle - function that print a triangle
 * @size: size of the triangulo
 *
 */
void print_triangle(int size)
{
	int i, a;

	if (size > 0)

	{
		for (i = 1; i <= size; i++)
	{
		for (a = 1; a <= i; a++)
		{
			if (a <= (size - i))

		_putchar(' ');

		else

		_putchar('#');
		}
	}
	}
	if (size <= 0)
	{
	_putchar ('\n');
	}
	_putchar ('\n');
}
