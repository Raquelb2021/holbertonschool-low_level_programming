#include "main.h"
/**
 * print_triangle - function that print a triangle
 * @size: size of the triangulo
 *
 */
void print_triangle(int size)
{
	int i, a;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else


	for (i = 0; i < size; i++)
	{
		for (a = 0; a <= i; a++)
		{

		_putchar('#');
		}
	}
	_putchar ('\n');
}
