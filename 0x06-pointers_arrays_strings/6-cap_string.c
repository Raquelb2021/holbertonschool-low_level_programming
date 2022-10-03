#include "holberton.h"
/**
 *
 */
char *cap_string(char *s)
{
	int a;


	for (a = 0; s[a] != '\0'; a++)
	{
		if (a == 0)
		{
			if ((s[a] >= 'a' && s[a] <= 'z'))
				s[a] = s[a] - 32;
			continue;
		}

		switch (s[a])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':

			++a;	
			if (s[a] >= 'a' && s[a] <= 'z')
			{
				s[a] = s[a] - 32;
				continue;
			}
			--a;
			break;

				default:

			break;
		}
	}
	return (s);
}
