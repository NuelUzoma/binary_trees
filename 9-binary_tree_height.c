#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - returns the height of the tree
 * @tree: the tree to be checked
 * Return: an integer
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight;
	size_t rightHeight;

	leftHeight = 0;
	rightHeight = 0;
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		leftHeight = binary_tree_height(tree->left);
		rightHeight = binary_tree_height(tree->right);

		if (leftHeight >= rightHeight)
		{
			return (leftHeight + 1);
		}
		else
		{
			return (rightHeight + 1);
		}
	}
}
