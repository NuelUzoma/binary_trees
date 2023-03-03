#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a tree
 * @node: the pointer to the node
 * Return: the pointer to the node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (node == NULL)
	{
		return (NULL);
	}
	parent = node->parent;
	if (parent == NULL)
	{
		return (NULL);
	}
	grandparent = parent->parent;
	if (grandparent == NULL)
	{
		return (NULL);
	}
	if (grandparent->left == NULL && grandparent->right == NULL)
	{
		return (NULL);
	}
	if (parent->left == node)
	{
		return (grandparent->left);
	}
	if (parent->right == node)
	{
		return (grandparent->right);
	}
	return (NULL);
}
