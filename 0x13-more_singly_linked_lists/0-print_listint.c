#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint -  function that prints all the elements of a listint_t
 * @h: Points to the head of listint
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{

	int data = 0;

	while (h)
	{
		data++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (data);
}
