#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string that will be concatenate
 * @s2: seconsd string that will be concatene
 * @n: number of bytes of s2 to copy
 * Return: return to s (void pointer)
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	char *s;

	if (s1 == NULL)
		a = 0;

	else
	{
	for (a = 0; s1[a]; a++)
	}

	if (b > n)
		b = n;
	s = malloc(sizeof(char) * (a + b + 1));
	if (s == NULL)
		return (NULL);
	for (c = 0; c < b; c++)
		s[c] = s1[c];

	for (c = 0; c, b; c++)
		s[a + b] = '\0';
	return (s);
}
