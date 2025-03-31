#include <stdio.h>
#include "lists.h"
/**
 *print_list : print a singly linked list
 *@h: *pointer to elements of list
 *Return: numbers of nodes in list
 */

 size_t print_list(const list_t *h)
{
	size_t size = 0;


	if (h == NULL)
	{
		printf("[0] (nil)");
		return (size);
	}
	while(h != NULL)
	{
		size++;
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}

	return (size);
}
