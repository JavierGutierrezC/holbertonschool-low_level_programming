#include "lists.h"
/**
 * get_nodeint_at_index - returrns a node from the list
 * @head: First element in the list
 * @index: index of the node
 * Return: NULL if node doesn't exist
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
