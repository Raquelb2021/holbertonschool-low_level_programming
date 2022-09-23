#include "main.h"
/**
 * _isupper - checks the uppercase character.
 * Return: return 1 if c is uppercase
 * 	return 0 otherwise
 * @c: the character
 */
int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
		return (1);

		else
		return (0);
}
