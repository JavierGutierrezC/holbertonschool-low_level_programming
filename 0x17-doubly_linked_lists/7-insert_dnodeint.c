#include "lists.h"
/**
 * insert_dnodeint_at_index - insert new node
 * @h: first element of the list
 * @idx: place where new node should be added
 * @n: new node
 * Return: Adress of new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *act, *new;

	if (h == NULL)
		return (NULL);

	act = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = act;
		new->prev = NULL;
		*h = new;
		return (*h);
	}
	while (idx > 1)
	{
		act = act->next;
		idx--;
		if (!act)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = act->next;
	act->next = new;
	new->prev = act;
	new->next->prev = new;
	return (new);
}
