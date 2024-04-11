#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a given node is a root
 * @node: Pointer ot the node to check
 *
 * Return: 1 if node is a root, otherwise 0
 *
 * Description: root node is one that doesn't have a parent.
 * If node is NULL, return 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	/* if it has a parent, it's not root */
	if (node->parent)
		return (0);
	return (1);
}
