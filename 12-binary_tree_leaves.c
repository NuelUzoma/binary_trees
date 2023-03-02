#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_leaves - returns the number of leaves
 * @tree: pointer to the tree
 * Return: the number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leftLeaf;
	size_t rightLeaf;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		leftLeaf = binary_tree_leaves(tree->left);
		rightLeaf = binary_tree_leaves(tree->right);
		
		if (leftLeaf - 1 > rightLeaf - 1)
		{
			return (leftLeaf + 1);
		}
		else
		{
			return (rightLeaf + 1);
		}
	}
}
