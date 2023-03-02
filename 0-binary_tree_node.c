#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - creates a new node
 * @parent: the pointer to the parent
 * @value: the value or data
 * Return: the pointer to the node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	if (!newnode)
	{
		return (NULL);
	}

	return (newnode);
}
