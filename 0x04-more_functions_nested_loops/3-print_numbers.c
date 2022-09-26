#include "main.h"
#include "_putchar.c"
/**
 * print_numbers - will print the number 0 to 9.
 * n - is a variable.
 */
void print_numbers(void)
{
	int n;
	while(n >= 0, n <= 9)
	{
		_putchar("%d", n);
		_putchar("\n");
		n++;
	}
}
