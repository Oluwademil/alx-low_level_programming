#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * delete_nodeint_at_index - To deletes the node at index of a listint_t
 * @head: points to the address of the head of a listint_t
 * @index: The node to be deleted in a listint_t
 * Return: 1 if it succeeded, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *loot, *temp = *head;
	unsigned int x;

	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (x = 0; x < (index - 1); x++)
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;
	}
		loot = temp->next;
		temp->next = loot->next;
		free(loot);
		return (1);
}

