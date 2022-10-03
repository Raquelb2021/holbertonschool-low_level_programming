#include "holberton.h"
/**
 *
 */
char *cap_string(char *s)
{
	int a;
	int b;

	for (b = 0; s[b] != '\0'; b++)

	while (s[a] != '\0')
	{
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			s[a] = s[a] - 32;
		}
	a++;
	}	
	return (s);
}
