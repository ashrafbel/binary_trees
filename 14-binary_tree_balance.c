#include "binary_trees.h"
/**
 * binary_tree_height - Calculates the height of a binary tree
 * @tree: Ptr he root node of the tree whose height is to be measured
 * Return: height of tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t HeightOfLeft = 0, HeightOfright = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		HeightOfLeft = binary_tree_height(tree->left) + 1;
	if (tree->right)
		HeightOfright = binary_tree_height(tree->right) + 1;
	return ((HeightOfLeft > HeightOfright) ? HeightOfLeft : HeightOfright);
}
/**
 * binary_tree_balance - Calculates the balance factor of a binary tree
 * @tree: Ptr to the parent shose balance factor o be calculates
 * Return: The balance factor, or 0 if the tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int HeightOfLeft, HeightOfright;

	if (!tree)
		return (0);
	HeightOfLeft = binary_tree_height(tree->left);
	HeightOfright = binary_tree_height(tree->right);
	return (HeightOfLeft - HeightOfright);
}
