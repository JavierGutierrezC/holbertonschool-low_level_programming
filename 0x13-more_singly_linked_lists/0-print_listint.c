#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints content of list
 * @h: start of a link list
 * Return: Number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;

	for (; h != NULL;)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
