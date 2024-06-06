#include "binary_trees.h"
/**
 * binary_tree_node - Creates a node in a binary tree
 * @parent: Ptr to the parent_node
 * @value: Val asign to new_node
 * Return: Ptr to the newly crated_node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *NEWNODE_;

	NEWNODE_ = malloc(sizeof(binary_tree_t));
	if (NEWNODE_ == NULL)
		return (NULL);

	NEWNODE_->n = value;
	NEWNODE_->parent = parent;
	NEWNODE_->left = NULL;
	NEWNODE_->right = NULL;
	return (NEWNODE_);
}
