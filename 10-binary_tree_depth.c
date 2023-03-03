#include "binary_trees.h"

/**
 * checks - check for the depth of the tree
 * @nodes; the node to be uded
 * @x: the integer
 * Return: the depth
 */
size_t checks(const binary_tree_t *nodes, int x)
{
	size_t drate;

	drate = 0;
	if ((nodes->n == x) || (drate = checks(nodes->left, x)) || (drate = checks(nodes->right, x)))
	{
		return (drate + 1);
	}
	return (drate);
}
/**
 * binary_tree_depth - finds the depth of the tree
 * @tree: the tree to be checked
 * Return: the depth of the tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (checks(tree, 0));
}
