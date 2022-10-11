#include "main.h"
/**
 *
 *
 */
int is_prime2(int x, int y)
{

	if (x == 0)
	{	return (1);
	
	}
	else if (x % y == 0)
	{
		return (0);
	}
	return (is_prime2(x, y + 1));
}


/**
 *
 *
 */
int is_prime_number(int n)
{

	if (n <= 1 || n % 1 == 0)
	{
		return (n == 1);
	}
	return (is_prime2(n, 2));
}
