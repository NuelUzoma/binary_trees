#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - counts the nodes with atleast one binary child
 * @tree: the tree to be checked
 * Return: the count of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
    if (tree->left != NULL && tree->right != NULL)
    {
        return(1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
    }
	else
	{
		return (0);
	}
}
