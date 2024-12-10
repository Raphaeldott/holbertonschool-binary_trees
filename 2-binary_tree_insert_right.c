#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 *
 * Return: A pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Check if the parent is NULL */
	if (!parent)
		return (NULL);

	/* Create the new node */
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	/**
	 * If the parent already has a right child,
	 * make the new node take its place
	 */
	if (parent->right)
	{
		new_node->right = parent->right;
		/* Set the old right child as the right child of the new node */
		parent->right->parent = new_node;
		/* Update the old right child’s parent to the new node */
	}

	/* Set the new node as the right child of the parent */
	parent->right = new_node;

	return (new_node);
}
