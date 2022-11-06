#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - t adds a new node at the beginning of a listint_t list
 * @head: pointer to the head of the list
 * @n: first node that will be add in the beginning of a list
 * Return: the address of the new element, or NULL if it failed
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

		newnode->n = n;

		newnode->next = *head;
		*(head) = newnode;

										return (*head);
}
