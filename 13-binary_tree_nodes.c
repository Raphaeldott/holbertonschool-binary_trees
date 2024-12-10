#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: The number of nodes with at least 1 child, or 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_count = 0, right_count = 0;

	if (tree == NULL)
		return (0);

	/* Count nodes in left and right subtrees */
	left_count = binary_tree_nodes(tree->left);
	right_count = binary_tree_nodes(tree->right);

	/* If the current node has at least one child, include it in the count */
	return ((tree->left || tree->right) + left_count + right_count);
}
