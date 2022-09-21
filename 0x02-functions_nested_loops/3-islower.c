/**
 * int _islower(int c); - checks for lowercase character
 * Return: Always 0.
 */
#include "main.h"
int _islower(int c);
{
	
	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	
	       	return (1);
	
	else
	
		return (0);
}
