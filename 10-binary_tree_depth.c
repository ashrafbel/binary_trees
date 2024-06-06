#include "binary_trees.h"
/**
 * binary_tree_depth - Determines the depth of a node within a binary tree
 * @tree: Ptr to the node wich the depth is to be determines
 * Return: 0 if tree is NULL, or depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
