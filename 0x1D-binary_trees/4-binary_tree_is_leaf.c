#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if the node is a leaf
 * @node: node to check if it is a leaf
 *
 *
 * Return: 1 if node is a leaf else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}