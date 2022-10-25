#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that return the sum of all its parameters.
 * @n: numbers of arguments into our function
 * @...: you are meddling with variadic function.
 * forloop -advance through our argument list and add elements.
 * Return: return value of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{

	unsigned int index, a = 0;

	va_list num;

	va_start(num, n);

	for (index = 0; index < n; index++)

	a += va_arg(num, int);

	va_end(num);

	return (a);

}
