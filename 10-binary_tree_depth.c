#include "binary_trees.h"
/**
 * binary_tree_depth - finds the depth of the tree
 * @tree: the tree to be checked
 * Return: the depth of the tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;
	if (tree == NULL)
	{
		return (0);
	}
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
