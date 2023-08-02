#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_nodeint_at_index - To locate a given node of a listint_t
 * @head: Points to the head of  the listint_t
 * @index: The node to be located
 * Return: The located node, or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int element;

	for (element = 0; element < index; element++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}

