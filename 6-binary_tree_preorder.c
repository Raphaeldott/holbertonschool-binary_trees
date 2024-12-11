#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * Description: Pre-order traversal visits the current node first,
 * then the left subtree, and finally the right subtree.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	if (!func)
		return;

	func(tree->n);  /* Process the current node */
	binary_tree_preorder(tree->left, func);  /* Traverse the left subtree */
	binary_tree_preorder(tree->right, func); /* Traverse the right subtree */
}
