#include "holberton.h"
/**
 * _strncpy - Function that is copying two strings
 * @a and @b: are integers
 * @n: integer
 * @dest: string
 * @src: string
 * Return: return to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	for (a = 0; a < 0; a++, b++)

	{
		for (a = 0; src[a] && a < n; a++)
			dest[a] = src[a];

		for (a = b; a < n; a++)
			dest[a] = '\0';

		}
	return (dest);
}
