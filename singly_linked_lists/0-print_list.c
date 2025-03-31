#include <stdio.h>
#include "lists.h"

/**
 *print_list - print a singly linked list
 *@h: *pointer to elements of list
 *Return: numbers of nodes in list
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;


	if (h == NULL)
	{
		return (size);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			size++;
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			size++;
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
	}

	return (size);
}
