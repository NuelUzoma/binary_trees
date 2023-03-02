#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - checks if a node is a root
 * @node: the node to be checked
 * Return: the number either 1 or 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (!node->parent)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
