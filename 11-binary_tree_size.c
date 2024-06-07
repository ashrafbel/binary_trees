#include "binary_trees.h"
/**
 * binary_tree_size - Calculates the size of a binary tree
 * @tree: Ptr he root node of the tree whose size is to be measured
 * Return: size of tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizeleft;
	size_t sizeright;

	if (!tree)
		return (0);
	sizeleft = binary_tree_size(tree->left);
	sizeright = binary_tree_size(tree->right);
	return (1 + sizeleft + sizeright);
}


