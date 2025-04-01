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

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned i = 0;

	if (head == NULL)
		return (NULL);
	for(; i < index; i++)
		head = head->next;

	return (head);
}
