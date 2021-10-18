#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert new node as the left-child of another node
 * @parent: pointer to parent node
 * @value: value for new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = binary_tree_node(parent, value);

	if (!newNode)
		return (NULL);
	if (parent->left)
	{
		parent->left->parent = newNode;
		newNode->left = parent->left;
	}
	parent->left = newNode;
	return (newNode);
}
