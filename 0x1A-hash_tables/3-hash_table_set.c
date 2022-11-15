#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * create_item - create a new item
 * @key: the key
 * @value: the value
 * Return: entry
 */
hash_node_t *create_item(const char *key, const char *value)
{
	/*allocate the entry*/
	hash_node_t *entry = malloc(sizeof(hash_node_t));

	entry->key = malloc(strlen(key) + 1);
	entry->value = malloc(strlen(value) + 1);

	/*copy the key and value in place*/
	strcpy(entry->key, key);
	strcpy(entry->value, value);
	return (entry);
}
/**
 * free_node - functions that free a node
 * @node: this is the node
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
/**
 *  hash_table_set -  that adds an element to the hash table.
 *  @key: The key, string
 *  @value: The value corresponding to a key
 *  @ht: is the hash table
 *  Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *curr;

	index = key_index((const unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (0);
	}

	new->key = strdup((char *)key);
	new->value = strdup((char *)value);
	new->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = new;
	else
	{
		curr = ht->array[index];
		if (strcmp(curr->key, key) == 0)
		{
			new->next = curr->next;
			ht->array[index] = new;
			free_node(curr);
			return (1);
		}
		while (curr->next != NULL && strcmp(curr->next->key, key) != 0)
		{
			curr = curr->next;
		}
		if (strcmp(curr->key, key) == 0)
		{
			new->next = curr->next->next;
			free_node(curr->next);
			curr->next = new;
		new->next = ht->array[index];
		ht->array[index] = new;
		}
	}
	return (1);
}
