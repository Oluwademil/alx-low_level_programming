#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node_end - To adds a new node at the end of a list_t list
 * @head: Points to the head of the list_t
 * @str: String to be added 
 * Return:  address of the new element, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{

	int n;
	char *dup;
	list_t *current, least;

	current = malloc(sizeof(list_t));
	if (current == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(current);
		return (NULL;
	}

	for (n = 0; str[n];)
		n++;
	current->len = n;
	current->str = dup;
	current->next = NULL;

	if (*head == NULL)
		*head = current;

	else
	{
		least = *head;
		while (least->next != NULL)
			least = least->next;
		least->next = current;
	}
	return (*head);
}
