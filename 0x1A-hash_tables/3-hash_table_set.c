#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * free_item - function that free a node
 * @node: node that is beeing free
 */
void free_item(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

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

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
		new->value = strdup((char *)value);
		new->next = NULL;
		if (ht->array[index] == NULL)
			ht->array[index] = new;
	else
	{
		temp = ht->array[index];
	if (strcmp(temp->key, key) == 0)
	{
		new->next = temp->next;
		ht->array[index] = new;
		free_item(temp);
		return (1);
	}
		while (temp->next != NULL && strcmp(temp->next->key, key) != 0)
		{
			temp = temp->next;
		}
		if (strcmp(temp->key, key) == 0)
		{
		new->next = temp->next->next;
		free_item(temp->next);
		temp->next = new;
		}
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	}
	return (1);
}
