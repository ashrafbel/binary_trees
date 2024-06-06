#include "binary_trees.h"
/**
 * binary_tree_insert_left - this function for
 * inserts a binary tree node as the left_child
 *@parent: Ptr to the node where the left child will be inserted.
 *@value: val to assign to the new_node
 * Return: Ptr to the newly created node
 * or NULL if the parent is NULL or on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *NEWNODE_ = NULL;

	if (parent == NULL)
		return (NULL);
	NEWNODE_ = binary_tree_node(parent, value);
	if (NEWNODE_ == NULL)
		return (NULL);
	if (parent->left)
	{
		NEWNODE_->left = parent->left;
		NEWNODE_->left->parent = NEWNODE_;
	}
	parent->left = NEWNODE_;
	return (NEWNODE_);
}
