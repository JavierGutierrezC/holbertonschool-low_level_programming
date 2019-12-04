#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to te tree node
 * Return: Address of the new element or NULL if it failed
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height1, height2;

	if (!tree)
		return (0);

	{
		height1 = binary_tree_height(tree->left) + 1;
		height2 = binary_tree_height(tree->right) + 1;
	}

	if (!tree->left && !tree->right)
		return (1);

	if (height1 > height2)
		return (height1);
	else
		return (height2);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to te tree node
 * Return: if tree is NULL return 0
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	/**int t_right = 0, t_left = 0;*/

	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

}
