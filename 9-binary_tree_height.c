#include "binary_trees.h"
#include <stdlib.h>

/**
 * check - checks for the height of the tree
 * @node: the node to be checked
 * @height: the height to be used
 * Return: the height of the tree
 */
size_t check(const binary_tree_t *node, size_t height)
{
	size_t newHeight, leftHeight, rightHeight;

	newHeight = 0;
	leftHeight = 0;
	rightHeight = 0;
	if (node->left == NULL && node->right == NULL)
	{
		return (height);
	}
	newHeight = height + 1;
	if (node->left != NULL)
	{
		leftHeight = check(node->left, newHeight);
	}
	if (node->right != NULL)
	{
		rightHeight = check(node->right, newHeight);
	}
	if (leftHeight > rightHeight)
	{
		return (leftHeight);
	}
	return (rightHeight);
}

/**
 * binary_tree_height - returns the height of the tree
 * @tree: the tree to be checked
 * Return: an integer
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (check(tree, 0));
}
