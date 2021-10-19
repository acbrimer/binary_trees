#include "binary_trees.h"

int isPerfect(const binary_tree_t *tree, int d, int l);

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 for perfect, else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;

	if (!tree)
		return (0);
	height = (int)(binary_tree_height(tree));
	return (isPerfect(tree, height, 0));
}

/**
 * isPerfect - recursive called from binary_tree_is_perfect
 * @tree: pointer to the root node of the tree to check
 * @h: height of the tree
 * @l: current level
 *
 * Return: 1 if perfect, else 0
 */
int isPerfect(const binary_tree_t *tree, int h, int l)
{
	if (!tree)
		return (1);
	if (!tree->left && !tree->right)
		return (h == l ? 1 : 0);
	if (!tree->left || !tree->right)
		return (0);
	return (isPerfect(tree->left, h, l + 1) && isPerfect(tree->right, h, l + 1));
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

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
