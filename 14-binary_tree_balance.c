#include "binary_trees.h"

/**
 * binary_tree_balance - finds the balance factor of a tree
 * @tree: the tree to be checked
 * Return: an integer
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t leftSubtree;
	size_t rightSubtree;

	if (tree == NULL)
	{
		return (0);
	}
	if ((tree->left == NULL && tree->right != NULL)
			|| (tree->left != NULL && tree->right == NULL))
	{
		return (-1);
	}
	else
	{
		leftSubtree = binary_tree_height(tree->left);
		rightSubtree = binary_tree_height(tree->right);

		return (leftSubtree - rightSubtree);
	}
}
