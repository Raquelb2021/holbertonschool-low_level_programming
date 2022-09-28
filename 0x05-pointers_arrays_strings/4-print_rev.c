#include "main.h"
#include <string.h>
/**
 * print_rev - Print the string, in reverse.
 * @s: string
 */
void print_rev(char *s)
{
	int i = 0;
	int j = strlen(s) - 1;
	char temp;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
	_putchar('\n');
}
