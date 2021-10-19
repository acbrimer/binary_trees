#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_balance - checks the balance of a binary tree
 * @tree: the node to measure from
 *
 * Return: the balance of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (left_height - right_height);
}

/**
 * binary_tree_height - get the height of a binary tree
 * @tree: pointer to the node to measure height from
 *
 * Return: height of binary tree or 0 for NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
