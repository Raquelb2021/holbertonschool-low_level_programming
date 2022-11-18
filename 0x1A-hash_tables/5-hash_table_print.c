#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new;
	unsigned long int a = 0;
	short ptcomma = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (; a < ht->size; a++)
	{
		new = ht->array[a];

	while (new)
	{
		if (ptcomma == 1)
			printf(", ");

		ptcomma = 1;
		printf("'%s': '%s'", (char *) new->key,
				(char *) new->value);

		new = new->next;
	}
	}
	printf("}\n");
}
