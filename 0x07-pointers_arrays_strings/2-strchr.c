#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string
 * @s: This is the C string to be scanned
 * @c: This is the character to be searched in str
 */
char *_strchr(char *s, char c)
{
	int i;

	while (*s != c)
	{
		++s;
		++i;
	}
	if (*s == c)
	{	return (s);

	}
	else
	{
		return (NULL);
	}

}
