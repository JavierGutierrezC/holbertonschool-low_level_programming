#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: FIrst element of the list
 * Return: if empty returns 0
 *
 */

int pop_listint(listint_t **head)
{
	int x;
	listint_t *tem;

	tem = *head;
	if (tem == NULL)
		return (0);

	tem = *head;
	if (tem != NULL)
	{
		*head = tem->next;
		x = tem->n;
		free(tem);
		return (x);
	}
	return (0);
}
