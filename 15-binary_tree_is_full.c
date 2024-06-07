#include "binary_trees.h"
/**
 * binary_tree_is_full - checks whether a binary tree is full or not
 * @tree: Ptr to the root node of the tree to check.
 * Return: 1 if the tree is full, 0 otherwise or if tree is NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full_;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		full_ = binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
	return (full_);
}
