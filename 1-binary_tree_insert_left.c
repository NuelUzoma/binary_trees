#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a node as the left child
 * @parent: the pointer to the newnode
 * @value: the data or value
 * Return: the pointer (newnode)
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	parent->left = newnode;

	if (!newnode || parent == NULL)
	{
		return (NULL);
	}

	return (newnode);
}
