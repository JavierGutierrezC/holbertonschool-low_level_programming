#include "lists.h"
/**
 *
 *
 *
 *
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	if (head == NULL)
		return(0);
	while (head != NULL)
	{
		add = add + head->n;
		head = head->next;
	}
	return(add);
}
