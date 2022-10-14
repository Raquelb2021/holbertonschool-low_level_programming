#include "main.h"
/**
 * _strcat - The function. This code is joing two strings.
 * @a, @b: are the integers.
 * @src: the string that is beeing joing.
 * @dest: the string that is beeing joing.
 * Return: will return the string dest.
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

		while (dest[a] != '\0')
		a++;

			while (src[b] != '\0')
			{

			dest[a] = src[b];
			b++;
			a++;

			}
	return (dest);

}
