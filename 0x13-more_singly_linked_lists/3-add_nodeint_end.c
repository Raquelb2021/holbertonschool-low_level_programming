#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head:  pointer to the tail of list
 * @n: node to be add in the end of list
 * Return: return the address of the new node
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *last;
	newnode = malloc(sizeof(listint_t));
	newnode->n = n;
	if (newnode == NULL)
	{
		return (NULL);
	}
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
