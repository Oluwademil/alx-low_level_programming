#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * sum_listint - Return the sum of all the data (n) of a listint_t
 * @head: Points to the head of the listint_t
 * Return: 0 if the list is empty, if not, sum of all the data
 */

int sum_listint(listint_t *head)
{

	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
