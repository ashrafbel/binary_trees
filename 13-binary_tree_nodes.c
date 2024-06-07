#include "binary_trees.h"
/**
 * binary_tree_nodes - Calculates the number of nodes
 *  in a binary tree that have at least one child.
 * @tree: Pointer to the root node of the tree to count the nodes.
 * Return: Number of node ,or 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t C;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		C = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
		return (C);
	else
		return (0);
}

