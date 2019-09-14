#include "lists.h"
/**
 * free_dlistint - Frees a dlists
 * @head: Start of list
 * Return: none
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
