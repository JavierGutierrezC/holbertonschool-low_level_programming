#include "lists.h"

/**
 *
 *
 *
 *
 *
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nn;
	int x;

	nn = malloc(sizeof(list_t));
	if (nn == NULL)
		return(NULL);
	nn->str = strdup(str);
	for (x = 0; str[x] != '\0'; x++)
		;
	nn->len = x;
	nn->next = *head;
	*head = nn;
	return(*head);
}
