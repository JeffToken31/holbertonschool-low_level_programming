#include <stdio.h>
#include "lists.h"

/**
 *dlistint_len - count numbers of node in a double linked list
 *@h: pointer to list
 *Return: numbers of nodes in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;


	if (h == NULL)
	{
		return (size);
	}
	while (h != NULL)
	{
		size++;
		h = h->next;
	}

	return (size);
}
