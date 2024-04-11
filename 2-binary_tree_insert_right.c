#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created nod, or NULL on failure or if parent is NULL
 *
 * Description: If parent already has a right-child, the new node takes its
 * palce,and the old right-child must be set as the right-child of the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	/* check if parent has right child already */
	if (parent->right)
	{
		new_node->right = parent->right;
		(new_node->right)->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
