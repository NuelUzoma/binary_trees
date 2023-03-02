#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_preorder - searches a binary tree in a preorder manner
 * @tree: the tree to be searched
 * @func: the function
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}
	printf("%d", tree->n);
	binary_tree_preorder(tree->left);
	binary_tree_preorder(tree->right);
}
