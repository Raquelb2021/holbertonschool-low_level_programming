#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separators the string to be printed between the strings
 * @n: is the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	 unsigned int index;
	char *str;
	va_list strings;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char*);

		if (str  == NULL)

				printf ("nil");

		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)

			printf("%s", separator);
		}

	printf ("\n");

	va_end(strings);
}
