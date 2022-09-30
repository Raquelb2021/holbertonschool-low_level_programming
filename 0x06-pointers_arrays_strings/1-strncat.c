#include "holberton.h"
/**
 * _strncat - function that in joing 2 strings.
 * @dest: string
 * @src: string
 * Return: Resturn dest
 * @n: integer
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a++])
		b++;

	for (a = 0; src[a] && a < n; a++)
		dest[b++] = src[a];

 return (dest);
}
