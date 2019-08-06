#include "lists.h"

/**
 * free_listint2 - drees a list
 * @head: Head of the list
 *
 *
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *tem;

	if (head == NULL)
		return;

		while (*head != NULL)
		{
		tem = (*head)->next;
		free(*head);
		(*head) = tem;
		}
	head = NULL;
	free(tem);
}
