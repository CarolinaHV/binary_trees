#include "binary_trees.h"
/**
 * binary_tree_leaves - This function counts the leaves in a binary tree
 * @tree:  is a pointer to the root node of the tree
 * to count the number of leaves
 * Return: value 0
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leave_left, leave_right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leave_left = binary_tree_leaves(tree->left);
	leave_right = binary_tree_leaves(tree->right);

	return (leave_left + leave_right);
	
}
