#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a node as left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 *
 * Description: If parent already had a left-child,
 * the new node takes its place, and the old left-child
 * must be set as the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
	{
		return (NULL);
	}

	/* allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->left = NULL;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->n = value;

	/* check if parent has left child already */
	if (parent->left)
	{
		new_node->left = parent->left;
		(new_node->left)->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
