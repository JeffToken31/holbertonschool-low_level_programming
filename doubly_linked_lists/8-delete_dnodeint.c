#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *delete_dnodeint_at_index - to pop(unallocate) element at index of list
 *@head: pointer of the list
 *@index: to target a place where we want to go
 *Return: 1 if success else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp;

	tmp = *head;

	if (tmp == NULL)
		return (1);

	if (index == 0 && tmp->next != NULL)
	{
		free(tmp);
		*head = (*head)->next;
		return (1);
	}
	if (index == 0)
	{
		free(*head);
		*head = NULL;
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}

	if (tmp->next == NULL)
	{
		tmp->prev->next = NULL;
		free(tmp);
		return (1);
	}
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	free(tmp);

	return (1);

}
