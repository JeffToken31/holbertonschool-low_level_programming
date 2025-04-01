#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *get_dnodeint_at_index - to throw the list easily
 *@head: pointer of first node
 *@index: index to keep node
 *Return: a node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	for (; i < index; i++)
	{
		if (head->next == NULL && index > i)
			return (NULL);
		head = head->next;
	}
	return (head);
}
