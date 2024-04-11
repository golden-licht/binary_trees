#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse through a binary tree
 * using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node. The value in the
 * node is passed as a parameter to this function
 *
 * Description: If tree or func is null, do nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	if (tree->left)
		binary_tree_preorder(tree->left, func);

	if (tree->right)
		binary_tree_preorder(tree->right, func);
}
