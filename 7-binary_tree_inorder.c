#include "binary_trees.h"
/**
 * binary_tree_inorder - tree elemts printes by using in_order traversal
 * @tree: Ptr to the root
 * @func: Ptr to the function to be called for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	else if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
