#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 *  hash_table_set - that adds an element to the hash table.
 *  @key: The key, string
 *  @value: The value corresponding to a key
 *  @ht: is the hash table
 *  Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *temp;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new = ht->array[index];

	if (new && strcmp(key, new->key) == 0)
	{
	free(new->value);
	new->value = strdup(value);
	return (1);
	}

	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
		return (0);

	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = ht->array[index];
	ht->array[index] = temp;
	return (1);


}
