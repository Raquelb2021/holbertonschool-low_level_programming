#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 -  function that frees a listint_t list.
 * @head: head pointer.
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)/* if head is NULL will return empty list*/
	return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
