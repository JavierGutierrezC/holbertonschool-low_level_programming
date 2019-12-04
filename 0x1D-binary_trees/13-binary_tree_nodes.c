#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least one child
 * @tree: pointer to the root node of the tree
 * Return: if tree is NULL return 0
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (tree != NULL && (tree->left != NULL || tree->right != NULL))
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	return (0);
}
