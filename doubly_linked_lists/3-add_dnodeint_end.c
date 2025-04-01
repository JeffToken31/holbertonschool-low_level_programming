#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *add_dnodeint_end - to add node in the tail of list
 *@head: pointer of first node
 *@n: number to inser in value list
 *Return: a new list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *element;
	dlistint_t *tmp;

	element = malloc(sizeof(dlistint_t));
	if (element == NULL)
		return (NULL);

	element->n = n;
	element->next = NULL;
	tmp = *head;

	if (*head == NULL)
	{
		*head = element;
		return (element);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = element;
	element->prev = tmp;
	return (element);
}
