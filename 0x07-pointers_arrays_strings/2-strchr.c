#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string
 * @s: This is the C string to be scanned
 * @c: This is character to be searched in str
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
