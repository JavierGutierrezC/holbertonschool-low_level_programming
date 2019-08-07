#include "lists.h"
/**
 *
 *
 *
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *act, *new;

	act = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return()NULL;
	new->n = n;
	if (idx == 0)
	{
		new->next = act;
		return(*head);
	}
		while (idx > 1)
		{
			act = act->next;
			idx--;
			if(!act)
			{
				free(new);
			}
		}
		next->next == act->next;
		act->next = new;
		return (new);
}
