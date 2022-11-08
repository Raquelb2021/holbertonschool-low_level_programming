#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to the address of the head of the linked list
 * @idx: the index where the new node will be add
 * @n: the integer for the new node to contain
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *copy = *head;
	unsigned int node;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = copy;
		*head = newnode;
		return (newnode);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}
	newnode->next = copy->next;
	copy->next = newnode;

	return (newnode);
}
