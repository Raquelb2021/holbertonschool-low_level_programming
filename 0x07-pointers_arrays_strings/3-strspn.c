#include "main.h"
/**
 * _strspn - function that calculates the length in bytes.
 * @s: the main string to be scanned
 * @accept: string containing the list of characters to match in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

		for (i = 0; s[i] != '\0'; i++)
		{
			for (j = 0; accept[j] != s[i]; j++)
			{
				if (accept[j] == '\0')

				return (i);
			}
		}
	return (i);
}
