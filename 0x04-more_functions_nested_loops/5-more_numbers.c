#include "main.h"
/**
 * more_numbers - Prints 10 times, from 0 to 14.
 * n - the variable
 *
 */
void more_numbers(void)
{
	int a, b;

	b = 0;

	while (b < 10)
	{
	for (a = 0; a <= 14; a++)
	{
		if (a > 9)

		_putchar((a / 10) + '0');

		_putchar((a % 10) + '0');
	}
		b++;
	_putchar('\n');
	}
}
