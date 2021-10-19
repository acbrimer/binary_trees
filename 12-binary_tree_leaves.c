#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: node to count from
 *
 * Return: number of leaves in the tree or 0 for NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	return (1);
}
