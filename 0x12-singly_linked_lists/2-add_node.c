#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - Adds new node to the beginning of a list_t
 * @head: The pointer to the head of list_t
 * @str: The string to be added to the list_t
 * Return: The address of the new element, NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{

	int n;
	char *dup;
	list_t *element;

	element = malloc(sizeof(list_t));
	if (element == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(element);
		return (NULL);
	}
	for (n = 0; str[n];)
		n++;

	element->len = n;
	element->str = dup;
	element->next = *head;

	*head = element;

	return (element);
}
