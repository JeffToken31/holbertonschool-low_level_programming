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

	if (*h == NULL)	/*if list is empty*/
	{
		element->next = NULL;
		element->prev = NULL;
		return (element);
	}
	if (idx == 0)	/*insertion at begin*/
	{
		element->next = *h;
		element->prev = NULL;
		*h = element;
		return (element);
	}
	for (i = 0; i < idx - 1; i++)	/*deplace tmp at index*/
		tmp = tmp->next;
	if (tmp == NULL) /*if index over limit of list*/
		return (NULL);
	if (tmp->next == NULL) /*insertion at end*/
	{
		tmp->next = element;
		element->next = NULL;
		element->prev = tmp;
		return (element);
	}
	element->next = tmp->next;
	element->prev = tmp;
	tmp->next->prev = element;
	tmp->next = element;
	return (element);
}
