#include "binary_trees.h"
/**
 * binary_tree_sibling - This function finds the sibling of a node
 * @node:  is a pointer to the node to find the sibling
 * Return: sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node != node->parent->right)
	{
		if (node->parent->right)
			return (node->parent->right);
		else
			return (NULL);
	}
	else
	{
		if (node->parent->left)
			return (node->parent->left);
		else
			return (NULL);
	}

}
