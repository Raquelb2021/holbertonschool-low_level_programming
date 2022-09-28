#include "main.h"
/**
 * print_triangle - function that print a triangle
 * size: size of the triangulo
 *
 */
void print_triangle(int size)
{
	int i;
	int a;

	if (size <= 0)
	{
		_putchar(10);
		return;
	}
	for (i = 0; i < size; i++)
	{
		if (a > i)
		_putchar(' ');

		else
		_putchar(35);
	}
	_putchar (10);
}
