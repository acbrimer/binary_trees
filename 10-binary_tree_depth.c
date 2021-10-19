#include "binary_trees.h"

/**
 * binary_tree_depth - gets depth of binary tree from node
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth or 0 if NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || (!tree->parent))
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
