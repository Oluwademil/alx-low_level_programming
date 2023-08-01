#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_listint2 - Function that frees a listint_t
 * @head: Points to the address of the head of the listint_t
 * Description: The function sets the head to NULL
 */

void free_listint2(listint_t **head)
{

	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
