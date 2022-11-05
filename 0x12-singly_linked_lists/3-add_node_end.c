#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 *
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;

	 newnode = malloc(sizeof(list_t));

         if (newnode == NULL)
            return (NULL);

	         newnode->str = strdup(str);
	         newnode->next = *head;
		 

	         return (*head);
}
