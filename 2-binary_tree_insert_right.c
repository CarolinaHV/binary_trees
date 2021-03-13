#include "binary_trees.h"
/**
 * binary_tree_insert_right - this function inserts a node as
 * the right-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = NULL;

	if (parent->right == NULL)
	{
		parent->right = new_node;
		return (new_node);
	}
	else
	{
		parent->right->parent = new_node;
		new_node->right = parent->right;
		parent->right = new_node;
		return (new_node);
	}
}
