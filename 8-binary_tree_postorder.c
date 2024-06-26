#include "binary_trees.h"
/**
 * binary_tree_postorder - tree elemts printes by using post_order traversal
 * @tree: Ptr to the root
 * @func: Ptr to the function to be called for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	else if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
