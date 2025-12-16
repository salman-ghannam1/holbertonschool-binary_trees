#include "binary_trees.h"

/**
 * height_helper - Computes height of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: Height of the tree
 */
static int height_helper(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (-1);

	left = height_helper(tree->left);
	right = height_helper(tree->right);

	if (left > right)
		return (left + 1);

	return (right + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (height_helper(tree->left)
			- height_helper(tree->right));
}
