#include "sort.h"

/**
 * insertion_sort_list - Sorting algorithm
 * @list: double pointer to adoubly linked list
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *smaller = NULL;
	int lenght = 0;

	if (!list)
	{
		return;
	}
	lenght = dlistint_len(*list);

	if (lenght < 2)
	{
		return;
	}
	tmp = (*list)->next;
	while (tmp != NULL)
	{
		if (tmp->n < tmp->prev->n)
		{
			smaller = tmp;
			while (smaller->prev)
			{
				if (smaller->n < smaller->prev->n)
				{
					swap_node(smaller->prev, smaller);
					if (smaller->prev == NULL)
						*list = smaller;
					print_list(*list);
					smaller = smaller->next;
				}
				smaller = smaller->prev;
			}
		}
		tmp = tmp->next;
	}
}


/**
 * swap_node - swaps node in list
 * @left: node to the left
 * @right: node to the right
 * Return: pointer to list
 */
listint_t *swap_node(listint_t *left, listint_t *right)
{
	listint_t *tempr;

	tempr = right;
	if (left->prev)
		left->prev->next = right;
	if (right->next)
		right->next->prev = left;
	left->next = right->next;
	right->prev = left->prev;
	right->next = left;
	left->prev = right;
	return (tempr);
}
#include <stdio.h>

/**
 * dlistint_len - function to return the length of the list
 * @h: pointer to head of the list
 * Return: length or number of nodes n
 */
size_t dlistint_len(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		/* printf("%d\n", h->n); */
		n++;
		h = h->next;
	}
	return (n);
}
