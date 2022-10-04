#include "main.h"
/**
 * _memset - Function that fill memory with a constant byte
 * @b: value to be filled
 * @n: number of bytes to be filled starting from s to be filled
 * @s: starting address of memory to be filled
 * Return: return value to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;

	}
	return (s);
}
