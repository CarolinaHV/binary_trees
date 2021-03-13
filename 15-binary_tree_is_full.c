#include "binary_trees.h"
/**
 * binary_tree_is_full - This function checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: Value 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full_left, full_right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	full_left = binary_tree_is_full(tree->left);
	full_right = binary_tree_is_full(tree->right);

	if (!full_left || !full_right)
		return (0);
	else
		return (1);
}
