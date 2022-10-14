#include "main.h"
/**
 * *_memcpy - is a function tha copy n bytes of source(src) to target(dest)
 * @dest: Pointer to the destination array where the content is to be copied
 * @src: Pointer to the source of data tho be copied.
 * @n: this is the number of bytes to be copied
 * Return: return to dest( destination array).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
