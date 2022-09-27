#include "main.h"
#include <string.h>

/**
 * _strlen - function that returns the length of a string
 * c: variable
 * @s: string
 * Return: return value
 */
int _strlen(char *s)
{
	int count;
	
	for (count = 0; s[count] != '\0'; ++count);

	return (count);
}
