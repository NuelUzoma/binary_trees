#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: the pointer to the tree
 * Return: an integer
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}
	else
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
}
