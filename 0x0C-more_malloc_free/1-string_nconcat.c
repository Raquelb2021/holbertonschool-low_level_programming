#include "main.h"
#include <string.h>
/**
 *
 *
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int space_needed;

	space_needed = strlen(s1) + strlen(s2) + 1

	s = malloc(space_needed);

	strcpy(s, s1);
	strcpy(s + strlen(s1), (s2);

			return (n);
}
