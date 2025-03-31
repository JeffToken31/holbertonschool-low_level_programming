#include <stdio.h>
#include "lists.h"

/**
 *list_len - count numbers of node in a singly linked list
 *@h: pointer to list
 *Return: numbers of nodes in list
 */

size_t list_len(const list_t *h)
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
