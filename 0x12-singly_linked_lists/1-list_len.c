#include "lists.h"
/**
 * list_len - Gives the lenght of a list
 * @h: Start of list
 * Return: element of the list
 *
 */
size_t list_len(const list_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}
	return (x);
}
