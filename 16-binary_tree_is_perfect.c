#include "binary_trees.h"

/**
 * leaf_depth - Gets the depth of the leftmost leaf
 * @tree: Pointer to the root node
 *
 * Return: Depth of the leftmost leaf
 */
static size_t leaf_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree != NULL)
	{
		if (tree->left != NULL)
			tree = tree->left;
		else if (tree->right != NULL)
			tree = tree->right;
		else
			break;

		depth++;
	}

	return (depth);
}

/**
 * is_perfect - Checks if a binary tree is perfect (helper)
 * @tree: Pointer to the current node
 * @leaf_d: Expected depth of all leaves
 * @level: Current level (depth) from the root
 *
 * Return: 1 if perfect, otherwise 0
 */
static int is_perfect(const binary_tree_t *tree, size_t leaf_d, size_t level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (level == leaf_d);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect(tree->left, leaf_d, level + 1) &&
			is_perfect(tree->right, leaf_d, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t d;

	if (tree == NULL)
		return (0);

	d = leaf_depth(tree);
	return (is_perfect(tree, d, 0));
}
