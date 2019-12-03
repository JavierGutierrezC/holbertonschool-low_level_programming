#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert right node
 * @parent: node to be inserted
 * @value: node to be inserted
 * Return: new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_C;
	binary_tree_t *child;

	if (parent)
	{
		right_C = (binary_tree_t *)malloc(sizeof(binary_tree_t));
		if (right_C == NULL)
			return (NULL);

		right_C->n = value;
		right_C->left = NULL;
		right_C->right = NULL;
		right_C->parent = parent;
		if (parent->right)
		{
			child = parent->right;
			right_C->right = child;
			child->parent = right_C;
		}
		parent->right = right_C;
		return (right_C);
	}
	else
		return (NULL);
}
