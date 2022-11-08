#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a lidtint_t
 * @head: pointer to the head of linked list
 * @index: is the index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int current;

	for (current = 0; current < index; current++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
