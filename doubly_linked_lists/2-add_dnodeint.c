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

	element = malloc(sizeof(dlistint_t));
	if (element == NULL)
		return (NULL);

	element->n = n;
	element->prev = NULL;
	element->next = *head;
	*head = element;
	return (element);
}
