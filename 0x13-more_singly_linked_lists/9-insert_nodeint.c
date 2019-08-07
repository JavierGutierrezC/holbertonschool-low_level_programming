#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node
 * @head: first element of the list
 * @idx: place where new node should be added
 * @n: new node
 * Return: Adress od new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *act, *new;

	act = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = act;
		*head = new;
		return (*head);
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
