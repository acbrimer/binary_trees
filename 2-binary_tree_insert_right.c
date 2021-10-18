#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert new node as the right-child of another node
 * @parent: pointer to parent node
 * @value: value for new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);
	newNode = binary_tree_node(parent, value);
	if (!newNode)
		return (NULL);
	if (parent->right)
	{
		parent->right->parent = newNode;
		newNode->right = parent->left;
	}
	parent->right = newNode;
	return (newNode);
}
