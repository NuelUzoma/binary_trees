#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - checks if a child is a leaf
 * 
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	binary_tree_t *newnode;
	int count;

	newnode = malloc(sizeof(binary_tree_t));
	newnode->parent = node;
	
	if (!node)
	{
		count++;
	}
	return (count);
}
