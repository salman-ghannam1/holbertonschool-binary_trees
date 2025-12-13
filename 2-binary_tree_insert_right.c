#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(*node));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->left = NULL;

	if (parent->right != NULL)
	{
		node->right = parent->right;
		node->right->parent = node;
	}
	else
	{
		node->right = NULL;
	}

	node->parent = parent;
	parent->right = node;

	return (node);
}
