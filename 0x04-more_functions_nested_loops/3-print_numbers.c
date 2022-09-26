#include "main.h"
/**
 * print_numbers - will print the number 0 to 9.
 * n - is a variable.
 */
void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{

		_putchar(n + '0');
		_putchar('\n');
		n++;

	}
}
