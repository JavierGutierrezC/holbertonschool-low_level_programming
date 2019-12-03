#include "binary_trees.h"
/**
 * binary_tree_insert_left - Insert left node
 * @parent: node to be inserted
 * @value: node to be inserted
 * Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_C;
	binary_tree_t *child;

	if (parent)
	{
		left_C = (binary_tree_t *) malloc(sizeof(binary_tree_t));
		if (left_C == NULL)
			return (NULL);

		left_C->n = value;
		left_C->left = NULL;
		left_C->right = NULL;
		left_C->parent = parent;
		if (parent->left)
		{
			child = parent->left;
			left_C->left = child;
			child->parent = left_C;
		}
		parent->left = left_C;
		return (left_C);
	}
	else
		return (NULL);
}
