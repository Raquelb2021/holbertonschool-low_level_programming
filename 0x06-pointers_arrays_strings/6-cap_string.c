#include "holberton.h"
/**
 *
 */
char *cap_string(char *s)
{
	int a;
	int b;


	while (s[a] != '\0')
	{
		if ((b %2 == 1) && s[a] >= 'a' && s[a] <= 'z')
		{
			s[a] = s[a] - 32;
		}
		else if (s[a] == 32 || 10 || 9 || 44 || 59 || 46 || 33 || 63 || 34 || 40 || 41 || 123 || 125)
		{
			b++;
		}

	a++;
	}	
	return (s);
}
