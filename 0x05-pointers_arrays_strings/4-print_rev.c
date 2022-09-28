#include "main.h"
/**
 * print_rev - Print the string, in reverse.
 * @s: string
 */
void print_rev(char *s)
{
	char temp;
	char* i = s;

	char* j = s + strlen(s);
	if(j > i) j--; 

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
