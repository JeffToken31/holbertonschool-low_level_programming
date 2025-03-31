#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *add_node - to add node in the head of list
 *@head: pointer of first node
 *@str: string to inser in list
 *Return: a new list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *element;

	element = malloc(sizeof(list_t));
	if (element == NULL)
		return (NULL);

	element->str = strdup(str);
	element->len = strlen(str);
	element->next = *head;

	*head = element;
	return (element);
}
