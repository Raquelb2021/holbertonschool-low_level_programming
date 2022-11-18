#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: the hash table
 * @key: key you are looking for
 * Return:Value associated with the elemen, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *result = NULL;
	unsigned int index = 0;

	if (ht == NULL)
		return (NULL);

	if (key == NULL)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	result = ht->array[index];

		while (strcmp(key, result->key) != 0)
		result = result->next;

	return (result->value);
}
