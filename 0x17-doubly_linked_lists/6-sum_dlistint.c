#include "lists.h"
/**
 * sum_dlistint - returns sum of all data in a list
 * @head: first element of a list
 * Return: the addiotn of the data or 0 if empty
 *
 */

int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		add = add + head->n;
		head = head->next;
	}
	return (add);
}
