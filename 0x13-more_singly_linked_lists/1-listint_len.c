#include "lists.h"

/**
 * listint_len - returns the number of elementsin a list
 * @h: list
 * Return: NUmber of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}
	return (x);
}
