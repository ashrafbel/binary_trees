#include "binary_trees.h"
/**
 * binary_tree_leaves - Calculates the number of
 * leaves present in a binary tree
 * @tree: Ptr to the parent of the tree from which to count the leaves.
 * Return: Number of leaves , or 0 if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t N = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	N = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (N);
}

