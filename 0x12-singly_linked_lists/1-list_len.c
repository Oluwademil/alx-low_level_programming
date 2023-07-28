#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * list_len - Print number of elements in a linked list_t
 * @h: The linked list_t list
 * Return: Number of elements in h
 */

size_t list_len(const list_t *h)
{

	int counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
