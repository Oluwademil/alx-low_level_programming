#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: Points to the address of the head
 * Return: 0 if linked list is empty or the head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if (*head == NULL)
		return (0);

	temp = *head;
	x = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (x);
}
