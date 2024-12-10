#include "binary_trees.h"

/**
 *binary_tree_sibling - finds the sibling of a node
 *@node: Pointer to the node to find the sibling
 *
 *Return: pointer to the sibling, or NULL if no sibling or node is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->left || !node->parent->right)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
