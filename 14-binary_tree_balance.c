#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = (int)binary_tree_height(tree->left);
	else
		left = -1;

	if (tree->right)
		right = (int)binary_tree_height(tree->right);
	else
		right = -1;

	return (left - right);
}
