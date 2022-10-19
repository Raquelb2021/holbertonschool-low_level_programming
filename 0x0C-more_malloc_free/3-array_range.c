#include "main.h"
/**
 * array_range - creates an rray of integers
 * @min: integer
 * @max: integer
 * Return: the pointer a
 *
 */
int *array_range(int min, int max)
{
	int *a;
	int i, l;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);

	if (a == NULL)

		return (NULL);
	for (i = 0; i < l; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}

