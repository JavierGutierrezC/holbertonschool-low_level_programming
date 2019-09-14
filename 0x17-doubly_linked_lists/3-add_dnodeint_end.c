#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a list
 * @head: Start of the line
 * @n: intiger to add
 * Return: Address of the new element , or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *newn;

	newn = malloc(sizeof(dlistint_t));
	if (newn == NULL)
		return (NULL);

	if(*head == NULL)
	{
		(*head) = newn;
	}
	else
	{
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next= newn;
		newn->prev = temp;
	}
	newn->n = n;
	newn->next = NULL;
	return (newn);

}
