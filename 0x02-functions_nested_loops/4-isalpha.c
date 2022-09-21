#iclude "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: character c
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _isalpha(nt c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
