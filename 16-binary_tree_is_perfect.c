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

/**
 * binary_tree_is_perfect - checks if the tree is perfect
 * @tree: pointer to the binary tree
 * Return: an integer
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
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
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
}
