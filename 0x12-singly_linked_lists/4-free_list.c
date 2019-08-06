#include "lists.h"

/**
 * free_list - Frees a list
 * @head: head of the list
 * Return: none
 *
 *
 */

void free_list(list_t *head)
{
	list_t *tem;

	while (head != NULL)
	{
		tem = head;
		head = head->next;
		free(tem->str);
		free(tem);
	}
}
