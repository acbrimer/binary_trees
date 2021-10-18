#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node
 * @value: the value to store in the new node
 *
 * Return: pointer to new node of type binary_tree_t
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode;

    newNode = malloc(sizeof(binary_tree_t));
    newNode->n = value;
    newNode->parent = parent;
    return newNode;
}