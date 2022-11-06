#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - function that frees a list_t list.
 *  @head: a pointer to the list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)/*if head is NULL, if yes we just return*/
	{
		temp = head;/*Save the head in a temp variable*/
		head = head->next;/*make head point to the next node*/
		free(temp);/*Now we can safely free(temp) variable*/
	}
}
