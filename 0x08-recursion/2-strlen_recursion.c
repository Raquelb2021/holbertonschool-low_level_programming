#include "main.h"
/**
 * _strlen_recursion - Prototype tha returns the length of a string
 * @s: string
 * Return: return 1 if are equal, else will return 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);

	}
	else

	return 1 + _strlen_recursion(s + 1);
}
