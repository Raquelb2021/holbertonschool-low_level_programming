#include "main.h"
#include "_putchar.c"
/**
 * print_numbers - will print the number 0 to 9.
 * n - is a variable.
 */
void print_numbers(void)
{
	int n = 0;
	while(n < 9)
	{
		_putchar(n);
		_putchar('\n');
		n++;
	}
}
