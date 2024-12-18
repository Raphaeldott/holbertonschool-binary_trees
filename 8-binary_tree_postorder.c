#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder- goes through a binary tree using post-order traversal
 *@tree: noeud racine
 *@func: nimber prints
 */


void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
	{
		return;
	}

	if (!func)
	{
		return;
	}


	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);

}
