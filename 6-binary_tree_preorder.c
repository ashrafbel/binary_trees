#include "binary_trees.h"
/**
 * binary_tree_preorder - tree elemts printes by using pre_order traversal
 * @tree: Ptr to the root
 * @func: Ptr to the function to be called for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	else if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
