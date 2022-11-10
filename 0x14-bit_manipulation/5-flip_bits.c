#include <stdio.h>
#include "main.h"
/**
 * flip_bits -  function that returns the number of bits.
 * @n: integer
 * @m: integer
 * Return:returns the number of bits
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	unsigned int x = n ^ m;

	while (x)
	{
		count += (x & 1);
		x >>= 1;
	}
	return (count);
}
