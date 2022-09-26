#include "main.h"
/**
 * more_numbers - Prints 10 times, from 0 to 14.
 * n - the variable
 *
 */
void more_numbers(void)
{
	int num = 0;
	int target = 14;

	while (num <= target)
	{
	_putchar(num + '0');
	}
	_putchar('\n');
}
