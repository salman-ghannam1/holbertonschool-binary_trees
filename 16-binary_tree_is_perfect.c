#include "binary_trees.h"

/**
 * is_full - Checks if a binary tree is full (helper)
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if full, otherwise 0
 */
static int is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_full(tree->left) && is_full(tree->right));
}

/**
 * height_edges - Measures height in edges (helper)
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the tree (edges), 0 if tree is NULL
 */
static size_t height_edges(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_h = height_edges(tree->left);
	right_h = height_edges(tree->right);

	if (left_h > right_h)
		return (left_h + 1);

	return (right_h + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	if (is_full(tree) == 0)
		return (0);

	left_h = height_edges(tree->left);
	right_h = height_edges(tree->right);

	if (left_h != right_h)
		return (0);

	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}
