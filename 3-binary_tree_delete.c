#include "binary_trees.h"
/**
 * binary_tree_delete - freeing each node in the tree recursively
 * @tree: Free tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
