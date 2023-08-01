#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * listint_len - Returns number of elements in a linked listint_t
 * @h: points to the hed of the listint_t
 * Return: Number of elements in a linked listint
 */

size_t listint_len(const listint_t *h)
{

	int data = 0;

	while (h)
	{
		data++;
		h = h->next;
	}
	return (data);
}

