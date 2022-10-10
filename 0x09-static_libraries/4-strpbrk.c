#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function searches the string s for any of a set of bytes
 * @s: string to be searched
 * @accept: substring of bytes to search for
 * Return: Returns a pointer to the byte in s, or NULL
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, check = 0, position = 0;

	i = 0;

	while (*(s + i) != '\0')
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				check = 1;
				position = i;
				break;
			}
		}
		if (check == 1)
		{
			break;
		}
		i++;
	}
		if (position == 0)

		return ('\0');

	else
	{
		return (s + position);
	}
}
