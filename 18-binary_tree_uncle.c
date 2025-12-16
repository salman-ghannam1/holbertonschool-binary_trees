#include "binary_trees.h"

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL)
        return node;

    if (node->parent->parent->left == node)
        return node;

    if (node->parent->parent->right == node)
        return node;
}