#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *sum_dlistint - to addition all elements of list
 *@head: pointer of first node
 *Return: sum of all element
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
