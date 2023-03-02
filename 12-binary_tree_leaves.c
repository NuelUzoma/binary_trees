#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_leaves - returns the number of leaves
 * @tree: pointer to the tree
 * Return: the number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}
}
