#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 *
 *
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *result;
	unsigned int slot;

	if (ht == NULL)
		return (NULL);

	if (key == NULL)
		return (NULL);

	while (result != NULL)
	{
		if (strcmp(result->key, key) == 0)
		{
			return (result->value);
		result = result->next;
		}
	}
	return (NULL);
}
