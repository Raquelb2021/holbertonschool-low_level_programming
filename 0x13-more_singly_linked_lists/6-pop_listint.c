#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: is a pointer to the head of list
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int a;

	if (*head == NULL)
		return (0);

	temp = *head;
	a = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (a);


}
