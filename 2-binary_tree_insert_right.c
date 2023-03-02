#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts a new node on the right
 * @parent: the parent pointer
 * @value: the data or value
 * Return: the pointer
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode || parent == NULL)
	{
		return (NULL);
	}
	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	if (parent && parent->right)
	{
		newnode->right = parent->right;
		newnode->right->parent = newnode;
	}
	parent->right = newnode;

	return (newnode);
}
