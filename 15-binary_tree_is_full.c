#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* If the tree is NULL, it's not full */
	if (!tree)
		return (0);

	/* If the node is a leaf, it's full */
	if (!tree->left && !tree->right)
		return (1);

	/* If the node has both left and right children, check subtrees */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	/* If the node has only one child, it's not full */
	return (0);
}
