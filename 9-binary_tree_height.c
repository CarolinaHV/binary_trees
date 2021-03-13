#include "binary_trees.h"
/**
 * find_max - Return the value max between node left and node right
 * @h_left: value node left
 * @h_right: value node right
 * Return: value max
 */
size_t find_max(int h_left, int h_right)
{
	if (h_left >= h_right)
		return (h_left);
	else
		return (h_right);
}

/**
 * find_height - Find the height of a tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: Value height
 */
size_t find_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (find_max(find_height(tree->left), find_height(tree->right)) + 1);
}

/**
 * binary_tree_height - This function measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: value 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t value;

	value = find_height(tree);

	if (value == 0)
		return (value);
	else
		return (value - 1);
}
