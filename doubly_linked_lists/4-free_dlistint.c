#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *free_dlistint - to pop(unallocate) all element of list
 *@head: pointer of the list
 *Return: no needed just free element of list and list
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}

}
