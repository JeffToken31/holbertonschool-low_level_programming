#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *insert_dnodeint_at_index - to add node a index of list
 *@h: pointer of first node
 *@idx: index
 *@n: number to inser in value list
 *Return: new list at index
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *element;
	dlistint_t *tmp;
	unsigned int i;

	element = malloc(sizeof(dlistint_t));
	if (element == NULL)
		return (NULL);

	element->n = n;
	tmp = *h;

	if (*h == NULL)
		return (*h);

	if (idx == 0)
	{
		element->next = *h;
		element->prev = NULL;
		*h = element;

		return (element);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (tmp->next == NULL && idx > i)
			return (NULL);
		tmp = tmp->next;
	}
	element->next = tmp->next;
	element->prev = tmp;
	if (tmp->next != NULL)
		tmp->next->prev = element;
	tmp->next = element;
	return (element);
}
