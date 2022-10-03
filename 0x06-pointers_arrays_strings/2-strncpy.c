#include "holberton.h"
/**
 * _strncpy - Function that is copying two strings
 * @a and @b: are integers
 * @c: integer
 * @n: integer
 * @dest: string
 * @src: string
 * Return: return to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;

		
	while (src[a] != '\0')
		a++;

	while (dest[b] != '\0')
		b++;

	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[c] = src[c];

	for (; c < n; c++)
		dest[c] = '\0';

	return (dest);
}
