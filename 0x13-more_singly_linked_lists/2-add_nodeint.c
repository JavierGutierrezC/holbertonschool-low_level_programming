#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of list
 * @head: head of the list and current place to add node
 * @n: variable to add to the list
 * Return: Adress of the new element or NULL if failed
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newn;

	newn = malloc(sizeof(listint_t));
	if (newn == NULL)
		return (NULL);
	newn->n = n;
	newn->next = *head;
	*head = newn;
	return (*head);
}
