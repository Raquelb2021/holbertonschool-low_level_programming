#include "main.h"
#include <string.h>

/**
 * _strlen - function that returns the length of a string
 * count: variable
 * @s: string
 * Return: return value
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')

		c++;

	return (c);
}
