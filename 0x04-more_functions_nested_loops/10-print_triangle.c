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
			for (a = i; a < size; a++)
			{
				_putchar(' ');
			}
			for (a = 1; a <= i; a++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
	}
	if (size <= 0)
		_putchar('\n');
}

