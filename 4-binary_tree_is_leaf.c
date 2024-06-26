#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Determines if a node is a leaf in  B_t
 * @node: Pointer to the node to be checked.
 * Return:1 if node is a leaf, otherwise return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
