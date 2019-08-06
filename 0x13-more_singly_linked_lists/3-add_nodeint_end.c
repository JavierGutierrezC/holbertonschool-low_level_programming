#include "lists.h"
/**
 *
 *
 *
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newn;
	listint_t *temp;

	newn = malloc(sizeof(listint_t));
	if (newn == NULL)
		return (NULL);

	if (*head == NULL)
	{
		(*head) = newn;
	}
	else
	{
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = newn;
	}
	newn->n = n;
	newn->next = NULL;

	return (*head);
}
