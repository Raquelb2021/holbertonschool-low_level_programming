#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * Return: prt, allocated memory
 * @b: integer
 */
void *malloc_checked(unsigned int b)
{

	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
