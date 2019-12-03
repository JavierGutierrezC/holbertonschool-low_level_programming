#include "binary_trees.h"
/**
 * binary_tree_postorder - prints the nods on the tree in postorder
 * @tree: binary tree with nods to print
 * @func: calls each nod
 * Return:
 *
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		if (tree->left)
			binary_tree_postorder(tree->left, func);
		if (tree->right)
			binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
