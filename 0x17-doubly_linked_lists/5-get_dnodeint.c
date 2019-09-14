#include "lists.h"
/**
 * get_nodeint_at_index - returns a node from the list
 * @head: First element of the list
 * @index: INdex of the node
 * Return: NULL if node doest exist or the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (X = 0; x < index; x++)
	{
		if (head->next == NULL)
			return (NULL);
	head = head->next;
	}
	return (head);
}
