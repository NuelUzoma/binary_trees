#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - deletes a tree
 * @tree: the tree to be deleted
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	newnode->left = NULL;
	newnode->right = NULL;

	if (tree == NULL)
	{
		return;
	}

	free(newnode);
}
