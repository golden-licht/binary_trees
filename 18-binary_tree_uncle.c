#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - Find the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node
 *
 * Description: If node is null, or node has no uncle,
 * return null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - Find the sibling of a node
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node.
 *
 * Description: If node is null, has null parent, or null sibling,
 * return null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if ((node->parent)->left != node)
		return ((node->parent)->left);
	return ((node->parent)->right);
}
