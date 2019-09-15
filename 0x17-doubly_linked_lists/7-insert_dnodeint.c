#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node
 * @h: first element of the list
 * @idx: place where new node should be added
 * @n: new node
 * Return: Adress od new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *act, *new;

	act = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = act;
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
	return (new);
}
