#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: The value to store in the new node
 *
 * Return: A pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Check if the parent is NULL */
	if (!parent)
		return (NULL);

	/* Create the new node */
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	/* If the parent already has a left child, make the new node take its place */
	if (parent->left)
	{
		new_node->left = parent->left;
		/* Set the old left child as the left child of the new node */
		parent->left->parent = new_node;
		/* Update the old left child’s parent to the new node */
	}

	/* Set the new node as the left child of the parent */
	parent->left = new_node;

	return (new_node);
}
