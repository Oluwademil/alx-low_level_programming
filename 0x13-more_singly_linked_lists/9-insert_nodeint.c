#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * insert_nodeint_at_index - To inserts a new node at a given position
 * @head: Points to the address of the head in a listint_t
 * @idx: New node to be inserted
 * @n: Integer for the new node
 * Return: NULL if it fails, otherwise, address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *current, *temp = *head;
	unsigned int  element;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);

	current->n = n;

	if (idx == 0)
	{
		current->next = temp;
		*head = current;
		return (current);
	}
	
	for (element = 0; element < (idx - 1); element++)
	{
		
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}
	current->next = temp->next;
	temp->next = current;

	return (current);
}
