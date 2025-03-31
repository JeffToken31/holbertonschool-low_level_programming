#include <stdio.h>
#include "lists.h"

/**
 *print_dlistint - print a doudly linked list
 *@h: pointer of new list in main
 *Return: size of list edited on main
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (size);

	while (h != NULL)
	{
		if (h->n == 0)
		{
			printf("[0] (nil)\n");
			size++;
			h = h->next;
		}
		else
		{
			printf("%d\n", h->n);
			size++;
			h = h->next;
		}
	}
	return (size);
}
