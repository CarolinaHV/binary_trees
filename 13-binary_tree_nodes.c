#include "binary_trees.h"
/**
 * binary_tree_nodes -  This function counts the nodes with at least 1 child in a binary tree
 * @tree: 
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_left, nodes_right;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (0);


	nodes_left = binary_tree_nodes(tree->left) + 1;
	nodes_right = binary_tree_nodes(tree->right) + 1;

	return (nodes_left + nodes_right - 1);
}
