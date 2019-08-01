#include "lists.h"
/**
 * print_list - prints content of list
 * @h: start of a link list
 * Return:number of elements in list
 *
 */
size_t print _list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len,h->str);
		count++;
		h = h->next;
	}
	return(count);
}
