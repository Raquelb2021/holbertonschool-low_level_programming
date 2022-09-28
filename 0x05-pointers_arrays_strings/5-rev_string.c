#include "main.h"
#include <string.h>
/**
 * rev_string - Reverse a string.
 *
 * @s: function
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int a, b, c;

	for (b = 0, c = length - 1; b < c; b++, c--)
	{
		a = s[b];
		s[b] = s[c];
		s[c] = a;
	}
}
