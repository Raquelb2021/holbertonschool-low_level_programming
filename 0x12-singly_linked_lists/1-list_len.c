#include "lists.h"
/**
 * list_len - return the number of elements in a linked list list_t
 * @h: pointer to the head of the list_t list
 * Return: return (node) number of elements of the linked list list_t
 */
size_t list_len(const list_t *h)
{
	size_t node;

	node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
