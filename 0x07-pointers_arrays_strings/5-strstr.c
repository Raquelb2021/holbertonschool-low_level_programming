#include "main.h"
#include <stddef.h>
/**
 * _strstr - function that locates a substring
 * @haystack: the string to be scanned
 * @needle: string to be searched with-in haystack string
 * Return: returns a pointer to the haystack, ot NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *Begin = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;

		}
		if (!*pattern)
			return (Begin);

		haystack = Begin + 1;
	}
	return (NULL);
}
