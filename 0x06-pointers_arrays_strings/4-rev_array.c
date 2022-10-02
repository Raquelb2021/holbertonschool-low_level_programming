#include "holberton.h"
/**
 *reverse_array - the function that is reversing the content of an array
 * @a: array
 * @n: numbers of elements od the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int j = n - 1;
	int temp;

		for (i = 0; i <= j; i++)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			j--;
		}

}
