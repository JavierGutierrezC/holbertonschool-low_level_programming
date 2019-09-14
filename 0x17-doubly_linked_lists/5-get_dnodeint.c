#include "lists.h"
/**
 * get_dnodeint_at_index - returns a node from the list
 * @head: First element of the list
 * @index: Index of the node
 * Return: NULL if node doest exist or the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; x < index; x++)
	{
		if (head->next == NULL)
			return (NULL);
	head = head->next;
	}
	return (head);
}
