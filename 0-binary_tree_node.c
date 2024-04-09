#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Given a parent node and a value,
 * create a child node with value @value
 * @parent: The parent node
 * @value: The value to be put in the new node
 *
 * Return: Pointer to the newly created child node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* allocate memory for the new node */
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->left = NULL;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->n = value;

	if (!parent)
	{
		return (parent = new_node);
	}

	/* check if the left node of the parent is null*/
	/* if not insert the new node to the right instead */
	if (!parent->left)
	{
		parent->left = new_node;
	}
	else
	{
		parent->right = new_node;
	}

	return (new_node);
}
