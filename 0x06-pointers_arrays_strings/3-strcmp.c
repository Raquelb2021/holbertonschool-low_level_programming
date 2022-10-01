#include "holberton.h"
/**
 *_strcmp - function that is comparing two strings
 * @s1: string
 * @s2: string
 * Return: return the values
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
}
