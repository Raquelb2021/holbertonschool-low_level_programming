#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - returns the number of elements in a linked list.
 * @head: pointer to the head of node.
 * @n: node to be add in the end of list
 * Return: the addrees of the new node
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head)
	{
		temp = *head;

		while (temp->next)
		temp = temp->next;

	temp->next = new;
	new->prev = temp;
	}
	else
		*head = new;

	return (*head);
}
