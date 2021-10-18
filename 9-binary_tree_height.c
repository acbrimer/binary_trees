#include "binary_trees.h"

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

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
