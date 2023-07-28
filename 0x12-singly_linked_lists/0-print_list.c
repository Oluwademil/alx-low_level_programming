#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - print all the elements of a list_t list
 * @h: list_t list
 * Return: number of nodes in h
 */

size_t print_list(const list_t *h)
{

	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil\n");

		else
			printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}


