#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the tail of list
 * @str: node to be add in the end of list
 * Return: return the address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicar;
	int len;
	list_t *newnode, *last;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	duplicar = strdup(str);
	if (str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	newnode->str = duplicar;
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = newnode;
	}
	return (*head);
}
