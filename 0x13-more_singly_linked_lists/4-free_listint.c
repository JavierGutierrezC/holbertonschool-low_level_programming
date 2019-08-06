#include "lists.h"

/**
 * free_listint - drees a list
 * @head: Head of the list
 *
 *
 *
 */

void free_listint(listint_t *head)
{
	listint_t *tem;

	while (head != NULL)
	{
		tem = head;
		head = head->next;
		free(tem);
	}
}
