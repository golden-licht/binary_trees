#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Measure the depth of a node in a binary tree
 * @tree: Pointer ot the node to measure the depth
 *
 * Return: The depth of the tree, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *current = (binary_tree_t *)tree;

	if (!tree)
		return (0);
	while (current->parent)
	{
		current = current->parent;
		depth++;
	}

	return (depth);
}
