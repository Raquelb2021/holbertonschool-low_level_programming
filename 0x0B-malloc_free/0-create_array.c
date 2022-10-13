#include "main.h"
/**
 * create_array - array for to print a string
 * @size: number elements array
 * @c: char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *) malloc(size * sizeof(c));

	if (p == 0)
	{
		return (NULL);
	}

	else
	{
		position = 0;
		while (position < size)
		{
		*(p + position) = c;
		position++;
		}

	return (p);
	}
}
