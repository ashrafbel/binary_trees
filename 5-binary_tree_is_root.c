#include "binary_trees.h"
/**
 * binary_tree_is_root - Determines if a node is root
 * @node: Ptr to the node to be checked
 * Return: 1 if the node is a leaf; otherwise, return 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	else if (!node->parent)
		return (1);
	return (0);
}
