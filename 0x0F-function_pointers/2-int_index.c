#include "function_pointers.h"
/**
 * int_index - Write a function that searches for an integer.
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to the function to comare values
 * Return: retur -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array)
	{
		for (i = 0; i < size; i++)
		{

		if (cmp(array[i]) != 0)

			return (i);
			}
			}
	return (-1);
}
