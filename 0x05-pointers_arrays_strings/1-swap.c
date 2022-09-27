#include "main.h"
/**
 * swap_int - function
 * temp: integer
 * @a: variable
 * @b: variable
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a   = *b;
	*b   =  temp;
}
