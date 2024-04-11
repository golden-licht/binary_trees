#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if a node is a leaf
 * @node: Pointer to the node to check
 *
 * Return: Return 1 if node is a leaf, otherwise 0
 *
 * Description: A leaf is a node that doesn't have a child.
 * If a node is NULL, return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	/* if it has either left or right child, it's not a leaf */
	if (node->left || node->right)
		return (0);
	return (1);
}
