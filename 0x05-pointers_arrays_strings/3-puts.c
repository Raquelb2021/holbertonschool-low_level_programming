#include "main.h"
/**
 * _puts - Prints the string.
 * @str: string
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
