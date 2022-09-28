#include "main.h"
#include <string.h>
/**
 * print_rev - Print the string, in reverse.
 * @s: string
 */
void print_rev(char *s)
{
	char *a = s;
	
	while ( *a ) ++a;
	{
	while ( a != s ) putchar( *--a );

	}
	putchar( '\n' );	
}
