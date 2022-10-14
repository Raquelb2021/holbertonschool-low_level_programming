#include "main.h"
#include <stddef.h>
/**
 * _strchr - That is a function that locates a character in a string
 * @s: This is the string to be scanned
 * @c: This is character to be searched in str
 * @s: return value NULL
 * Return: rerurn to s
 *
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
	if (*s != c)
		s++;
	else
		return (s);

	}
	if (c == '\0')
		return (s);


	return (NULL);
}
