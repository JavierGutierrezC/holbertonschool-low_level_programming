#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of the list
 * @head: First element of the list
 * @str: list
 * Return: adress of new element or NULL if fail
 *
 */


list_t *add_node_end(list_t **head, const char *str)
{

	int x;
	list_t *newn;
	list_t *temp;

	newn = malloc(sizeof(list_t));
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
	newn->str = strdup(str);
	for (x = 0; str[x] != '\0'; x++)
		;
	newn->len = x;
	newn->next = NULL;

	return (newn);

}
