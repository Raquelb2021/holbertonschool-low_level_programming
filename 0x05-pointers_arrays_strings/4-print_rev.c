#include "main.h"
#include <string.h>
/**
 * print_rev - Print the string, in reverse.
 * @s: string
 */
void print_rev(char *s)
{
	char s[1000], rev[1000];
	int i, j, count = 0;
			
	while (s[count] != '\0')
	{
		count++;
	}
	j = count - 1;

	for (i = 0; i < count; i++)
	{
		rev[i] = s[j];
		s--;
	}
	_putchar('\n');
}
