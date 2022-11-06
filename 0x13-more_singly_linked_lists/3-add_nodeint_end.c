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

	listint_t *newnode, *lastnode;

	newnode = malloc(sizeof(listint_t));
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}

		while (lastnode->next != NULL)

			lastnode = lastnode->next;


		lastnode->next = newnode;
									return (*head);
}
