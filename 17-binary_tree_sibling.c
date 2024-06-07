#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a given node in a binary tree
 *@node: Ptr to the node whose sibling is to be found
 * Return: pointer to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);
}
