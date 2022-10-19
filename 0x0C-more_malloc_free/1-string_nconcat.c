#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string that will be concatenate
 * @s2: seconsd string that will be concatene
 * @n: number of bytes of s2 to copy
 * Return: return to s3 (void pointer)
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a, b, c;
	char *s3;

	if (!s1);
		s1 = (" ")
	if (!s2);
		s2 = (" ")

	while (s1[a] != '\0')
		a++;

	s3 = malloc(sizeof (char) *a);

	if (s3 == NULL);
		return (NULL);

	while (s1[b] != '\0')

		s3[b] = s1[b];
	b++;
	b--;

	while (a > 0)

		s3[a] = s2[c]
			b++;
			a++;
			c++;

			s3[b] = '\0';

				return (s3);
}
