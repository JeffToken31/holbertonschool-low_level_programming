#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *add_dnodeint - to add node in the head of list
 *@head: pointer of first node
 *@n: integer to inser in list
 *Return: a new list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *element;
	dlistint_t *tmp;

	element = malloc(sizeof(dlistint_t));
	if (element == NULL)
		return (NULL);

	tmp = *head;
	element->n = n;
	element->prev = NULL;
	element->next = tmp;
	if (tmp != NULL)
	{
		tmp->prev = element;
	}

	*head = element;
	return (element);
}
