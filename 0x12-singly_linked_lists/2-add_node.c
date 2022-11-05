#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @str: first node that will be add in the beginning of a list
 * @head: pointer to the head of the list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int strLen;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	strLen = strlen(str);

	newnode->len = strLen;

	newnode->str = strdup(str);

	newnode->next = *head;

	(*head) = newnode;

	return (0);
}

/**
 * strlen - calculate the string length
 * @s: pointer
 * Return: the length of a string
 */
size_t strlen(const char *s)
{
	int b = 0;

	while (*s)
	{
		s++;
		b++;
	}
		return (b);

}
