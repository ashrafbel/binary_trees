#include "binary_trees.h"
/**
 * binary_tree_height - Calculates the height of a binary tree
 * @tree: Ptr he root node of the tree whose height is to be measured
 * Return: height of tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t HeightOfLeft = 1, HeightOfright = 1;

	if (tree == NULL)
		return (0);
	if (tree->left)
		HeightOfLeft = binary_tree_height(tree->left) + 1;
	if (tree->right)
		HeightOfright = binary_tree_height(tree->right) + 1;
	return ((HeightOfLeft > HeightOfright) ? HeightOfLeft : HeightOfright);
}
/**
 * binary_tree_is_perfect - checks whether a binary tree
 * tree is perfect or not
 * @tree: Ptr to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t HeightOfLeft = 0, HeightOfright = 0;

	if (!tree)
		return (0);
	HeightOfLeft = binary_tree_height(tree->left);
	HeightOfright = binary_tree_height(tree->right);

	if (HeightOfLeft == HeightOfright)
	{
		if (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right))
			return (1);
		else
			return (0);
	}
	return (0);
}
