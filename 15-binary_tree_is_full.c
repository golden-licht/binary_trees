#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if it's full, or 0 otherwise
 *
 * Description: A binary tree is full if all of it's nodes
 * except the leaves have two children
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
