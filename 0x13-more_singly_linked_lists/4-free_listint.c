#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_listint - Function that frees a listint_t
 * @head: Points to the head of the listints_t
 */

void free_listint(listint_t *head)
{

	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

