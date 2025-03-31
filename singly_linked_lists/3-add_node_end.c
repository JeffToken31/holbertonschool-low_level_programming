#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *add_node_end - to add node in the tail of list
 *@head: pointer of first node
 *@str: string to inser in list
 *Return: a new list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *element;
	list_t *tmp;
	unsigned int size = 0;

	element = malloc(sizeof(list_t));
	if (element == NULL)
		return (NULL);

	element->str = strdup(str);
	while(*str)
	{
		size++;
		str++;
	}
	element->len = size;
	
	tmp = *head;

	if (*head == NULL)
		*head = element;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = element;
	return (element);
}
