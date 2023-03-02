#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - deletes a tree
 * @tree: the tree to be deleted
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	free(tree);
	free(tree->left);
	free(tree->right);
}
