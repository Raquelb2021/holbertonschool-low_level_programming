#include "holberton.h"
/**
 * *string_toupper - lower case letters of a string to uppercase.
 *  @a: string
 *  Return: return the value to string a
 *
 */
char *string_toupper(char *a)
{

	int i;

	for (i = 0; i[a] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = (int)a[i] - 32;

	}

	return (a);
}
