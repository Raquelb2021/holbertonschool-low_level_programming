#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - Write a function that prints all the elements of a list_t list.
 * @h: pointer to the head of the list_t list
 * Return: return to the number of nodes
 */
size_t print_list(const list_t *h)
{
	int nodes;
	nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		nodes++;
	}

	return (nodes);
}
