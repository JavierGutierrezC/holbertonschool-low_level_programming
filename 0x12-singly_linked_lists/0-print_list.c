#include "lists.h"
/**
 * print_list - prints content of list
 * @h: start of a link list
 * Return:number of elements in list
 *
 */
size_t print_list(const list_t *h)
{
	size_t x;

	x = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		printf("[0](nil)\n");

		else
		printf("[%d] %s\n", h->len, h->str);
		x++;
		h = h->next;
	}
	return (x);
}
