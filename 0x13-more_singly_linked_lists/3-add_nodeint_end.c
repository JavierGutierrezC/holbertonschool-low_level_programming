#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end
 * @head: first element of the list
 * @n: node
 * Return: Adress of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newn;
	listint_t *temp;

	newn = malloc(sizeof(listint_t));
	if (newn == NULL)
		return (NULL);

	if (*head == NULL)
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
		temp->next = newn;
	}
	newn->n = n;
	newn->next = NULL;

	return (*head);
}
