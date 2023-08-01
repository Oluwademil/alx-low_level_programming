#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_nodeint_end - Add new node at the end of a listint_t
 * @head: Points to the address of the head of listint_t
 * @n: Integer for the new node
 * Return: NULL if funcion fails, otherwise address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *current, *last;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->n = n;
	current->next = NULL;
	if (*head == NULL)
		*head = current;
	else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;
		last->next = current;
	}
		return (*head);
}

