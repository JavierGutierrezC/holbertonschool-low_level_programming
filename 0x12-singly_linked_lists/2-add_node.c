#include "lists.h"

/**
 * add_node - Adds a new node to the tlist at the begining
 * @head: head of the list
 * @str: string of the function
 * Return: Adreess of new element
 *
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newn;
	int x;

	newn = malloc(sizeof(list_t));
	if (newn == NULL)
		return (NULL);
	newn->str = strdup(str);
	for (x = 0; str[x] != '\0'; x++)
		;
	newn->len = x;
	newn->next = *head;
	*head = newn;
	return (*head);
}
