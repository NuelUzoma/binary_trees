#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - finds the size of a tree
 * @tree: the tree to be checked
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
	}
}
